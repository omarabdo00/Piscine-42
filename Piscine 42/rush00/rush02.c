/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:23:35 by oabdo             #+#    #+#             */
/*   Updated: 2025/06/21 16:23:43 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	rush2(int x, int y, int i, int j);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (y <= 0 || x <= 0)
		return ;
	i = 1;
	while (i <= y)
	{
		j = 1;
		rush2(x, y, i, j);
		i++;
		ft_putchar('\n');
	}
}

void	rush2(int x, int y, int i, int j)
{
	while (j <= x)
	{
		if ((i == 1 && j == 1) || (i == 1 && j == x))
			ft_putchar('A');
		else if ((i == 1 || i == y) && (j > 1 && j < x))
			ft_putchar('B');
		else if ((i == y && j == 1) || (i == y && j == x))
			ft_putchar('C');
		else if ((i > 1 || i < x) && (j == 1 || j == x))
			ft_putchar('B');
		else
			ft_putchar(' ');
		j++;
	}
}
