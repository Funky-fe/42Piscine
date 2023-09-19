/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:10:34 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/16 15:20:29 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar('0' + (a / 10));
			ft_putchar('0' + (a % 10));
			ft_putchar(' ');
			ft_putchar('0' + (b / 10));
			ft_putchar('0' + (b % 10));
			if (a != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
