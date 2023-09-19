/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:05:18 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/21 18:06:03 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	numero;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else if (power > 1)
	{
		numero = ft_recursive_power(nb, power - 1);
		numero *= nb;
	}
	else
		numero = nb;
	return (numero);
}

// void ft_recursive_power_test(int nb, int power)
// {
// 	int res;

// 	res = ft_recursive_power(nb, power);
// 	printf(" nb = %d, power = %d, result: %d\n", nb, power, res);
// }

// int	main(void)
// {
// 	int nb;
// 	int power;

// 	// testando potencias negativas(deve retornar 0)
// 	printf("[1] Potencias negativas(deve retornar 0)\n");
// 	nb = -4;
// 	while (nb <= 4)
// 	{
// 		power = -4;
// 		while (power < 0)
// 		{
// 			ft_recursive_power_test(nb, power);
// 			power++;
// 		}
// 		nb++;
// 	}
// 	// testando potencias 0(deve retornar 1)
// 	printf("[2] Potencias 0(deve retornar 1)\n");
// 	nb = -4;
// 	power = 0;
// 	while (nb <= 4)
// 	{
// 		ft_recursive_power_test(nb, power);
// 		nb++;
// 	}
// 	// testando potencias 0(deve retornar 1)
// 	printf("[3] Potencias positivas\n");
// 	nb = -4;
// 	while (nb <= 4)
// 	{
// 		power = 1;
// 		while (power <= 4)
// 		{
// 			ft_recursive_power_test(nb, power);
// 			power++;
// 		}
// 		nb++;
// 	}
// 	return (0);
// }