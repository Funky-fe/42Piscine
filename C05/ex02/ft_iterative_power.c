/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:11:40 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/21 16:37:59 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	numero;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	numero = nb;
	power --;
	while (power > 0)
	{
		numero *= nb;
		power--;
	}
	return (numero);
}

/*void ft_iterative_power_test(int nb, int power)
{
	int res;

	res = ft_iterative_power(nb, power);
	printf(" nb = %d, power = %d, result: %d\n", nb, power, res);
}

int	main(void)
{
	int nb;
	int power;
	printf("[1] Potencias negativas(deve retornar 0)\n");
	nb = -2;
	while (nb <= 2)
	{
		power = -2;
		while (power < 0)
		{
			ft_iterative_power_test(nb, power);
			power++;
		}
		nb++;
	}
	printf("[2] Potencias 0(deve retornar 1)\n");
	nb = -2;
	power = 0;
	while (nb <= 2)
	{
		ft_iterative_power_test(nb, power);
		nb++;
	}
	printf("[3] Potencias positivas(deve retornar o numero elevado a potencia)\n");
	nb = -2;
	while (nb <= 2)
	{
		power = 1;
		while (power <= 2)
		{
			ft_iterative_power_test(nb, power);
			power++;
		}
		nb++;
	}
	return (0);
}*/