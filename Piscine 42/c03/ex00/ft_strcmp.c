/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:16:14 by oabdo             #+#    #+#             */
/*   Updated: 2025/06/26 13:39:38 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char	*x = {"hi mi name is :"};
	char	*y = {"hi mi nam"};

	printf("%d\n",ft_strcmp(x, y));
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && *s1 != '\0')
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}
