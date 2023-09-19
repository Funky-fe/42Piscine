/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:42:10 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/23 14:46:35 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	x;

	i = 0;
	n = 1;
	x = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while ((str[i] && str[i] == '+' ) || str[i] == '-' )
	{
		if (str[i] == '-' )
			n *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9' ))
	{
		x = str[i] - '0' + (x * 10);
		i++;
	}
	return (x * n);
}

/*void	ft_atoi_like_test(char *str)
{
	int	buff;
	int	ft_buff;

	buff = atoi(str);
	ft_buff = ft_atoi(str);
	if (buff != ft_buff)
		printf("> KO, invalid %d got: %d\n", buff, ft_buff);
	else
		printf("> OK. result: %d\n", ft_buff);
}

void	ft_atoi_unlike_test(char *str, int expected_result)
{
	int ft_buff;

	ft_buff = ft_atoi(str);
	if (ft_buff != expected_result)
		printf("> KO, invalid %d got: %d\n", expected_result, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}
int		main(void)
{
	char *str;

	// quando o comportamento e igual ao de atoi
	str = " \n \t \r \v +1234567asd";
	ft_atoi_like_test(str);
	str = " \n \t\f\r \v -1234b67asd";
	ft_atoi_like_test(str);
	// quando o comportamento e diferente ao de atoi
	str = " \n \t \r \v --+-+-+-2147483648asd";
	ft_atoi_unlike_test(str, -2147483648);
	str = " \n \t\f\r \v -++-+-++1234b67asd";
	ft_atoi_unlike_test(str, -1234);
	return (0);
}*/