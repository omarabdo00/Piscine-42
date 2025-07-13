/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:42:00 by oabdo             #+#    #+#             */
/*   Updated: 2025/06/21 10:51:16 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tempp;
	int	x;
	int	y;

	x = 0;
	y = 0;
	tempp = 0;
	while (x <= size - 1)
	{
		while (y < size - x - 1)
		{
			if (tab[y] > tab[y + 1])
			{
				tempp = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = tempp;
			}
			y++;
		}
		x++;
		y = 0;
	}
}
