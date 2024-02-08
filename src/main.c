/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:27:23 by aperron           #+#    #+#             */
/*   Updated: 2024/02/08 10:57:40 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	main(int argc, char const *argv[])
{
	t_push_swap	*push_swap;

	check_input(argc, argv);
	push_swap = init_push_swap(argv, argc);
	sort(push_swap);
	free_pushswap(push_swap);
	push_swap = NULL;
	return (0);
}
