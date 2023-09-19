/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:34:25 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/27 12:51:32 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	digit(char str, char *base)
{
	int	a;

	a = 0;
	while (base[a] != 0 && base[a] != str)
		a++;
	return (a);
}

int	ft_check_base(char *base)
{
	int	i;
	int	a;

	i = 0;
	while (base[i] != '\0')
	{
		a = 0;
		while (a < i)
		{
			if (base[i] == '+' || base[i] == '-' || base[i] == base[a]
				|| base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
				return (0);
			a++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	checkbase;
	int	nb;
	int	neg;

	nb = 0;
	neg = 1;
	checkbase = ft_check_base(base);
	if (checkbase <= 1)
		return (0);
	while ((*str != 0 && *str >= 9 && *str <= 13) || *str == 32)
			str++;
	while ((*str != 0 && *str == '-' ) || *str == '+' )
	{
		if (*str++ == '-' )
			neg *= -1;
	}
	while (*str != 0 && (digit(*str, base) < checkbase))
	{
		nb = (nb * checkbase) + (digit(*str, base));
		str++;
	}
	return (nb * neg);
}

/*void	ft_atoi_base_test(char *str, char *base, int expected_number)
{
	int ft_buff;

	ft_buff = ft_atoi_base(str, base);
	if (ft_buff != expected_number)
		printf("> KO, expected: %d got: %d\n", expected_number, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}

int	main(void)
{
	// teste com bases binarias
	printf("Bases binarias:\n");
	ft_atoi_base_test("\n \t\r \v \f++++--1000,.fs", "01", 8);
	printf("Bases octais:\n");
	ft_atoi_base_test("\n \t\r \v \f++-++--205,.fs", "01234567", -133);
	printf("Bases hexadecimais:\n");
	// teste com bases invalidas
	printf("Bases invalidas:\n");
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "", 0);
	ft_atoi_base_test("\n \t\r ++-++-123456,das", "0", 0);
}*/