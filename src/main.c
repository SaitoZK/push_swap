/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:27:23 by aperron           #+#    #+#             */
/*   Updated: 2024/02/07 15:42:39 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	main(int argc, char const *argv[])
{
	t_push_swap	*push_swap;
	int			nb_moves;

	check_input(argc, argv);
	push_swap = init_push_swap(argv, argc);
	display_push_swap(push_swap);
	ft_printf("Sorting stack...\n");
	nb_moves = bubble_sort(push_swap);
	ft_printf("Finished in %d moves!\n", nb_moves);
	display_push_swap(push_swap);
	return (0);
}
