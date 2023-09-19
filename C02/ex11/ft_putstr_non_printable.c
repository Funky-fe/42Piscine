/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:52:40 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/14 17:15:36 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	printavel(char c)
{
	return (c > 31 && c < 127);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0' )
	{
		if (printavel(str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			if (str[i] < 0)
				c = 256 + str[i];
			else
			c = str[i];
			ft_putchar("0123456789abcdef"[c / 16]);
			ft_putchar("0123456789abcdef"[c % 16]);
		}
		i++;
	}
}
