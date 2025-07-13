/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 16:21:42 by oabdo             #+#    #+#             */
/*   Updated: 2025/07/02 18:06:34 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>
int	*ft_range(int min, int max);

int	main(void)
{
	int	mk = 10;
	int	in = 2;
	int	*tmp = ft_range(in, mk);
	int	i = 0;


	while (i < (mk - in))
	{
		printf("%d", tmp[i]);
		i++;
	}
}
*/
int	*ft_range(int min, int max)
{
	int	*x;
	int	i;
	int	y;

	y = max - min;
	x = (int *)malloc(sizeof(int) * y);
	i = 0;
	while (i < y)
	{
		x[i] = min + i;
		i++;
	}
	return (x);
}
