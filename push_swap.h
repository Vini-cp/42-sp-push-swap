#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# define TRUE 1
# define FALSE 0

void	  ft_print_lst(t_list *lst);
t_list    *ft_initiate_stack(int argc, char *argv[]);
int     ft_is_sorted(t_list *lst);
void    ft_swap(t_list **lst);

#endif
