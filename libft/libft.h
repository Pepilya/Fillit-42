/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 09:55:48 by ipepelia          #+#    #+#             */
/*   Updated: 2019/10/22 19:12:59 by ipepelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# define BUFF_SIZE 8000

void	ft_putchar(char c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strlen(const char *str);
char	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	ft_bzero(void *str, size_t n);
char	*ft_memchr(const void *str, int c, size_t n);
char	*ft_memcpy(void *s1, const void *s2, size_t n);
char	*ft_memmove(void *s1, const void *s2, size_t n);
char	*ft_memset(void *str, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *s1, const char *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strncpy (char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t nb);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *str, const char *to_find);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putstr(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
char	*ft_strdup(const char *str);
int		ft_isascii(int c);
int		ft_atoi(const char *str);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memalloc(size_t size);
char	*ft_strnew(size_t size);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_putstr(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
void	ft_strdel(char **as);
void	ft_memdel(void **as);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putstr(const char *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr(int nb);
void	ft_sortnb(int *tab, int size);
int		*ft_range(int min, int max);
int		get_next_line(const int fd, char **line);

#endif
