/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:59:11 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/23 16:50:53 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0' )
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc > 1)
	{
		while (i >= 1)
		{
			ft_putstr(argv[i]);
			i--;
		}
	}
}
