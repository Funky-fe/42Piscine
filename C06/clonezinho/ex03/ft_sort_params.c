/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:24:14 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/23 16:51:13 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str != '\0' )
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		a;
	char	*temp;

	a = argc;
	i = 1;
	while (++i <= argc)
	{
		a = 1;
		while (++a <= argc - 1)
		{
			if (ft_strcmp(argv[a], argv[a - 1]) < 0)
			{
				temp = argv[a];
				argv[a] = argv[a - 1];
				argv[a - 1] = temp;
			}
		}
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
}
