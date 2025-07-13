/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:32:21 by oabdo             #+#    #+#             */
/*   Updated: 2025/06/30 14:53:12 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d",ft_iterative_factorial(3));
}
*/
int	ft_iterative_factorial(int nb)
{
	int	r;
	
	r = 1;
	if(nb == 0)
		return (1);
	else if (nb < 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (r);
	}
	while (nb > 0)
	{
		r *= nb--;
	}
	return (r);
}
