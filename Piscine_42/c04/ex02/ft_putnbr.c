/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:34:44 by oabdo             #+#    #+#             */
/*   Updated: 2025/06/29 13:42:18 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_print(char *c, int i);

int	main(void)
{
	ft_putnbr(4);

}

void	ft_putnbr(int nb)
{
	char	str[11];
	int		i;

	if (nb > -2147483648 && nb <= 2147483647)
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		i = 0;
		while (nb >= 10)
		{
			str[i] = (nb % 10) + '0';
			nb /= 10;
			i++;
		}
		str[i] = nb + '0';
		ft_print(str, i);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
}

void	ft_print(char *c, int i)
{
	while (i >= 0)
	{
		write(1, &c[i], 1);
		i--;
	}
}
