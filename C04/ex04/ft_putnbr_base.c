/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:17:58 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/21 14:37:09 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_ajuda(int nbr, char *base, int size)
{
	unsigned char	a;
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_ajuda(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

int	ft_check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (ft_check_base(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		ft_ajuda(nbr, base, s);
	}
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int		main(void)
// {
// 	// base binaria
// 	printf("Bases binarias, n = 47. \"01\"\n");
// 	ft_putnbr_base(47, "01");
// 	ft_putchar('\n');
// 	// base 5
// 	printf("Bases 5, n = 36. \"01345\"\n");
// 	ft_putnbr_base(36, "01345");
// 	ft_putchar('\n');
// 	printf("Correto > 131\n");
// 	// base 10
// 	printf("Bases 10, n = %d. \"0123456789\"\n", INT_MIN);
// 	ft_putnbr_base(INT_MIN, "0123456789");
// 	ft_putchar('\n');
// 	printf("Correto > -2147483648\n");
// 	// base 16
// 	printf("Bases 16, n = -65040. \"0123456789ABCDEF\"\n");
// 	ft_putnbr_base(-65040, "0123456789ABCDEF");
// 	ft_putchar('\n');
// 	printf("Correto > -FE10\n");
// 	return (0);
// }