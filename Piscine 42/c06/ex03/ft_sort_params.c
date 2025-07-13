/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:41:42 by oabdo             #+#    #+#             */
/*   Updated: 2025/07/02 12:47:28 by oabdo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *c);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int		i;
	char	*swp;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swp;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_print(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_print(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
