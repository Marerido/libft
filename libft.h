/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:54:53 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/16 17:35:02 by tunglaub         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
/*******************************************************************************
		       		  Control
*******************************************************************************/
int				ft_isalpha(int a);
int				ft_isalnum(int a);
int				ft_isdigit(int a);
int				ft_isascii(int a);
int				ft_isprint(int a);
/*******************************************************************************
                                    Changes
*******************************************************************************/
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_atoi(char *str);
char			*ft_itoa(int n);
/*******************************************************************************
                                    Memory
*******************************************************************************/
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memset(void *pointer, int value, size_t count);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *str1, const void *str2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_calloc(size_t nitems, size_t size);
/*******************************************************************************
                                    Strings
*******************************************************************************/
int				ft_strncmp(const char *str1, const char *str2, size_t n);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
char			*ft_strdup(char *src);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char            *ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(char const *str, char const c);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t			ft_strlen(const char *str);
size_t			ft_strlcat(char *dest, char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
/*******************************************************************************
                                    Others
*******************************************************************************/
void			ft_bzero(void *s, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);

#endif
