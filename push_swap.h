#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# define TRUE 1
# define FALSE 0
# define SMALL_THRESHOLD 4
# define MEDIUM_THRESHOLD 15
# define BIG_THRESHOLD 100

t_list    *ft_initiate_stack(int argc, char *argv[]);
void	  ft_print_lst(t_list *lst_a, t_list *lst_b);
int     ft_check_numbers(int argc, char *argv[]);
int     ft_is_sorted(t_list *lst);
void    ft_swap(t_list **lst);
void    ft_push(t_list **lst_a, t_list **lst_b);
void    ft_rotate(t_list **lst);
void    ft_reverse_rotate(t_list **lst);
void    ft_movements(t_list **a, t_list **b, char *mov);
void    ft_small_sort(t_list **a, t_list **b);

#endif
