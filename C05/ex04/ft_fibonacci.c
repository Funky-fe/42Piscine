/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:09:42 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/22 12:52:05 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	nb;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		nb = ft_fibonacci(index - 1);
		nb = nb + ft_fibonacci(index - 2);
	}
	return (nb);
}

/*int	main(void)
{
	int res;
	int index;

	index = 7;
	while (index < 12)
	{
		res = ft_fibonacci(index);
		printf ("%d, ", res);
		index++;
	}
	res = ft_fibonacci(index);
	printf ("%d\n", res);
	return (0);
}*/