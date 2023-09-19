/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:26:22 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/21 16:37:40 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	numero;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 2)
	{
		numero = ft_recursive_factorial(nb - 1);
		numero *= nb;
		nb--;
	}
	else
		numero = nb;
	return (numero);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int nb;
// 	int res;

// 	nb = -5;
// 	while (nb <= 10)
// 	{
// 		res = ft_recursive_factorial(nb);
// 		printf("> n = %d, n! = %d\n", nb, res);
// 		nb++;
// 	}
// 	return (0);
// }