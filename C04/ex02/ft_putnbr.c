/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:50:41 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/16 15:07:30 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}	
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	if (nb < 10)
		ft_putchar(nb + 48);
}
