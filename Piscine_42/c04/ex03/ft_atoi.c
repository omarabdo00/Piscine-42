/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:46:47 by oabdo             #+#    #+#             */
/*   Updated: 2025/06/27 18:22:15 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char *ss = {" 	---+--+1234ab567"};

	ft_atoi(ss);
	printf("%d",ft_atoi(ss));
}
*/
int	ft_atoi(char *str)
{
	int	i;
	int	sum;
	int	sin;

	i = 0;
	sin = 1;
	sum = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		++i;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sin = sin * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sum * sin);
}
