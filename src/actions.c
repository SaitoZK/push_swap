/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:38:38 by aperron           #+#    #+#             */
/*   Updated: 2024/02/07 11:41:06 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	sa(t_push_swap *push_swap)
{
	swap(&push_swap->a);
	ft_printf("sa\n");
}

void	sb(t_push_swap *push_swap)
{
	swap(&push_swap->b);
	ft_printf("sb\n");
}

void	ss(t_push_swap *push_swap)
{
	swap(&push_swap->a);
	swap(&push_swap->b);
	ft_printf("ss\n");
}

void	pa(t_push_swap *push_swap)
{
	push(&push_swap->b, &push_swap->a);
	ft_printf("pa\n");
}

void	pb(t_push_swap *push_swap)
{
	push(&push_swap->a, &push_swap->b);
	ft_printf("pb\n");
}
