/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:13:04 by oabdo             #+#    #+#             */
/*   Updated: 2025/06/18 16:24:48 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_print_comb_level_tow(char a);

void	ft_print_comb(void)
{
	char	a;

	a = '0';
	while (a <= '7')
	{
		ft_print_comb_level_tow(a);
		a++;
	}
}

void	ft_print_comb_level_tow(char a)
{
	char	b;
	char	c;
	char	sps[3];

	sps[0] = ',';
	sps[1] = ' ';
	sps[2] = '\0';
	b = a + 1;
	while (b <= '8')
	{
		c = b + 1;
		while (c <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			if (a == '7' && b == '8' && c == '9')
			{
				return ;
			}
			write(1, sps, 2);
			c++;
		}
		b++;
	}
}
