/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:11:25 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/19 20:43:19 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

int					ft_atoi(const char *str);
int         ft_isspace(int c);
int					ft_isdigit(int c);
size_t				ft_strlen(const char *s);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
int         ft_lstpop_back(t_list **lst);
int         ft_lstpop_front(t_list **lst);
void				ft_lstclear(t_list **lst);
void				ft_lstdelone(t_list *lst);
void				ft_lstiter(t_list *lst, void (*f)(int));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstnew(int content);
int					ft_lstsize(t_list *lst);

#endif
