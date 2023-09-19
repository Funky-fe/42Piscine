/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:16:50 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/14 16:53:33 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i - 1] <= 47)
			a = 0;
		else if (str[i - 1] >= 58 && str[i - 1] <= 64)
			a = 0;
		else if (str[i - 1] >= 91 && str[i - 1] <= 96)
			a = 0;
		else if (str[i - 1] > 122)
			a = 0;
		else
			a = 1;
		if (str[i] >= 'a' && str[i] <= 'z' && a == 0)
			str[i] -= 32;
		if (str[i] >= 'A' && str[i] <= 'Z' && a == 1)
			str[i] += 32;
		i++;
	}
	return (str);
}
