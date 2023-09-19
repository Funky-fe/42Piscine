/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:49:10 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/23 17:42:38 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb < 2)
		return (0);
	while (div <= (nb / div))
	{
		if (nb % div == 0)
			return (0);
		else
			div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (nb > 1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
