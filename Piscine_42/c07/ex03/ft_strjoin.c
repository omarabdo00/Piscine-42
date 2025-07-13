/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 07:58:14 by oabdo             #+#    #+#             */
/*   Updated: 2025/07/07 12:58:46 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
/*
char	*ft_strjoin(int size, char **strs, char *sep);
int		str_size(char **strs, int size);

int	main()
{
	char	*x[] = {"hello", "my", "name", "is", "omar"};
	char	*y = {", "};
	printf("%s", ft_strjoin(5, x, y));
}
*/

int	str_size(char **strs, int size)
{
	int	i;
	int	j;
	int	s;

	s = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s = s + j;
			j++;
		}
		s = s + j;
		i++;
	}
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		z;
	char	*tmp;

	z = 0;
	tmp = (char *)malloc(sizeof(char) * (str_size(strs, size) + size));
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			tmp[z++] = strs[i][j++];
		}
		j = 0;
		if (i != size - 1)
		{
			while (sep[j] != '\0')
				tmp[z++] = sep[j++];
		}
		i++;
	}
	tmp[z] = '\0';
	return (tmp);
}
