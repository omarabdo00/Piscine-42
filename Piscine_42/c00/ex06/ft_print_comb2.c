/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:12:57 by oabdo             #+#    #+#             */
/*   Updated: 2025/06/18 13:39:41 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print_comb2_level_2(char x, char y);

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x <= 99)
	{
		while (y <= 99)
		{
			ft_print_comb2_level_2(x, y);
			if (x == 98 && y == 99)
			{
				return ;
			}
			y++;
		}
		y = 0;
		x++;
	}
}

void	ft_print_comb2_level_2(char x, char y)
{
	char	first1;
	char	first2;
	char	second1;
	char	second2;

	first1 = x / 10 + '0';
	first2 = x % 10 + '0';
	second1 = y / 10 + '0';
	second2 = y % 10 + '0';
	write (1, &first1, 1);
	write (1, &first2, 1);
	write (1, " ", 1);
	write (1, &second1, 1);
	write (1, &second2, 1);
	if (!(x == 98 && y == 99))
	{
		write (1, ", ", 2);
	}
}
