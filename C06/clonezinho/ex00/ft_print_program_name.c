/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:57:24 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/22 15:05:13 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0' )
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
		ft_putstr(argv[0]);
}
