/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:37:05 by oabdo             #+#    #+#             */
/*   Updated: 2025/07/06 18:14:18 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int  *ar = NULL;

	printf("%d", ft_ultimate_range(&ar, 2, 10));
}
*/
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	j;

	j = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * j);
	i = 0;
	if (arr != NULL)
	{
		while (min < max)
		{
			arr[i++] = min++;
		}
		*range = arr;
		return (i);
	}
	else
		return (-1);
	arr[i] = '\0';
}
