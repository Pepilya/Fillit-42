/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 11:20:00 by ipepelia          #+#    #+#             */
/*   Updated: 2019/10/02 15:30:22 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int	addbuff(char **buf, int fd)
{
	char	buff[BUFF_SIZE + 1];
	char	*tmp;
	int		count;

	count = read(fd, buff, BUFF_SIZE);
	buff[count] = 0;
	if (buf[fd] == NULL)
	{
		if (!(buf[fd] = ft_strnew(1)))
			return (-1);
	}
	if (!(tmp = ft_strjoin(buf[fd], buff)))
		return (-1);
	free(buf[fd]);
	buf[fd] = tmp;
	return (count);
}

static	int	addline(char **buf, char **line, int count, int fd)
{
	int		i;
	char	*tmp;

	i = 0;
	while (buf[fd][i] != '\n' && buf[fd][i] != 0)
		i++;
	if (buf[fd][i] == '\n')
	{
		*line = ft_strsub(buf[fd], 0, i);
		tmp = ft_strdup(buf[fd] + i + 1);
		free(buf[fd]);
		buf[fd] = tmp;
	}
	else if (buf[fd][i] == 0)
	{
		if (count == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(buf[fd]);
		ft_strdel(&buf[fd]);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static	char	*buf[12000];
	int				count;

	if (fd < 0 || !line || (read(fd, NULL, 0)) < 0)
		return (-1);
	count = addbuff(buf, fd);
	if (count < 0)
		return (-1);
	else if (count == 0 && (buf[fd][0] == 0 || buf[fd] == NULL))
		return (0);
	return (addline(buf, line, count, fd));
}
