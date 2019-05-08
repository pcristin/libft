/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:35:49 by pcristin          #+#    #+#             */
/*   Updated: 2019/05/08 11:49:34 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strclr(char *s);
int				ft_strlen(const char *str);
void			ft_strdel(char **as);
void			ft_striter(char *s, void (*f)(char *));
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1,char const *s2);
int				ft_strnequ(char const *s1, char const *s2,size_t n);
int				ft_strncmp(char *s1, char *s2, size_t n);
#endif
