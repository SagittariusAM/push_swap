/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:35:47 by mzeggaf           #+#    #+#             */
/*   Updated: 2023/12/28 00:22:27 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include "get_next_line/get_next_line.h"

/*			structs			*/
typedef struct s_stack
{
	int				nb;
	int				index;
	int				z_index;
	int				costa;
	int				costb;
	struct s_stack	*next;
}	t_stack;

/*			tools				*/
t_stack	*ft_create_t_stack(int *nbs, int len);
int		ft_stack_len(t_stack *stack);
int		ft_sorted(t_stack *stack);
int		ft_is_int_max(char *str);

/*			input			*/
t_stack	*ft_get_stack(int argc, char *argv[]);
void	ft_free(char **input);

/*			functions			*/
int		ft_apply_instructions(t_stack *a, t_stack *b);

/*			instructions			*/
void	swap(t_stack *one);
void	swap_both(t_stack *a, t_stack *b);
void	push_a(t_stack **a, t_stack **b);
void	push_b(t_stack **a, t_stack **b);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	rotate_both(t_stack *a, t_stack *b);
void	reverse_rotate_both(t_stack *a, t_stack *b);

#endif
