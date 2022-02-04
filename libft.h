/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@stadent.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:36:57 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/25 20:00:42 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

int			ft_isalnum(int ch);
int			ft_isalpha(int c);
void		*ft_memchr( const void *memptr, int val, size_t num);
int			ft_strncmp( const char *string1, const char *string2, size_t num );
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_atoi(const char *s);
void		*ft_calloc(size_t nmemb, size_t size);
int			ft_isascii(int c); 
int			ft_isprint(int c);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *s, unsigned char c, unsigned int len);
char		*ft_strchr(const char *s, char c);
char		*ft_strdup(const char *src);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *s);
char		*ft_strrchr(const char *s, int c);
int			ft_isdigit(int c);
void		ft_bzero(char *s, int n);
int			ft_memcmp(const void *buf1, const void *buf2, size_t count);
void		*ft_memcpy(void *destptr, const void *srcptr, size_t num);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
void		ft_putchar_fd(char c, int fd);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		ft_putnbr_fd(int n, int fd);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strtrim(char const *s1, char const *set);

#endif
