/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:26:31 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/23 16:59:48 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	numero;

	numero = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 1)
	{
		numero *= nb;
		nb--;
	}
	return (numero);
}
