/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:59:58 by oabdo             #+#    #+#             */
/*   Updated: 2025/06/25 20:01:45 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	char	arr[] = "omar123456789";
	char	dest[50];
	unsigned int n = 6;

	printf("%s \n",arr);
	int k = ft_strlcpy(dest, arr, n);
	printf("%s \n",dest);
	printf("%d" , k);
}*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size > 0)
	{
		while (i < size -1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
