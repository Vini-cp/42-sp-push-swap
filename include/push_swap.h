/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 01:57:31 by coder             #+#    #+#             */
/*   Updated: 2022/02/06 21:18:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# define TRUE 1
# define FALSE 0
# define SMALL_THRESHOLD 3
# define MEDIUM_THRESHOLD 10
# define CHUNCK_NO 10
# define SPLIT_CHAR ' '

t_list	*ft_initiate_stack(int argc, char *argv[]);
int		ft_check_numbers(int argc, char *argv[]);
int		ft_is_sorted(t_list *lst);
int		ft_get_smallest_no(t_list *lst);
int		ft_get_biggest_no(t_list *lst);
int		ft_arraylen(char **str);
void	ft_swap(t_list **lst);
void	ft_push(t_list **lst_a, t_list **lst_b);
void	ft_rotate(t_list **lst);
void	ft_reverse_rotate(t_list **lst);
void	ft_movements(t_list **a, t_list **b, char *mov);
void	ft_small_sort(t_list **a, t_list **b);
void	ft_medium_sort(t_list **a, t_list **b);
void	ft_big_sort(t_list **a, t_list **b);
void	ft_free(t_list **a, t_list **b, char **str, int str_len);
char	**ft_parse_numbers(int argc, char *argv[]);

#endif
