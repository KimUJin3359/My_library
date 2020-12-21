/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojikim <woojikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:53:18 by woojikim          #+#    #+#             */
/*   Updated: 2020/12/21 15:54:26 by woojikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "stdlib.h"

void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, char *src, size_t size);
char		*strchr(const char *s, int c);
char		*strrchr(const char *s, int c);
char		*strnstr(const char *src, const char *find, size_t len);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

#endif
