/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:50:16 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/14 17:09:48 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (src[a] != '\0')
		a++;
	if (size != '\0' )
	{
		while ((i < (size - 1)) && (src[i] != '\0' ))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (a);
}
