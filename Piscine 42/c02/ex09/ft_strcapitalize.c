/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:42:10 by oabdo             #+#    #+#             */
/*   Updated: 2025/06/26 19:20:14 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

char	*ft_strcapitalize(char *str);

int	main()
{
	char	x[] = "hi, how are you? 42words forty-two; fifty+and+one";
	
	printf("%s \n",x);
	ft_strcapitalize(x);
	printf("%s \n",x);
	return (0);
}
*/
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	y;

	y = 0;
	i = 1;
	while (str[y] != '\0')
	{
		if (str[y] >= 'A' && str[y] <= 'Z' )
		{
			str[y] = str[y] + 32;
		}
		y++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (((str[i - 1] == 32) || (str[i - 1] == 45) || (str[i - 1] == 43))
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
