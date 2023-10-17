/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:40:39 by long              #+#    #+#             */
/*   Updated: 2023/10/17 17:16:42 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stddef.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char    *ft_strchr(char *s, int c);
char *ft_strdup(const char *s1);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlen(const char *s);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);

char    *ft_itoa(int n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char set);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif
