/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:04:48 by oabdo             #+#    #+#             */
/*   Updated: 2025/07/02 13:45:59 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*tmp = {"hi my name is omar"};
	printf("%s", ft_strdup(tmp));
}

char	*ft_strdup(char *src)
{
	int		i;
	int		x;
	char	*ar;

	i = 0;
	while (src[i] != '\0')
		i++;
	i = i - 1;
	ar = (char *)malloc(sizeof(char) * i);
	x = 0;
	while (x <= i)
	{
		ar[x] = src[x];
		x++;
	}
	ar[x] = '\0';
	return (ar);
}
