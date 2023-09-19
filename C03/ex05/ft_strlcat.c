/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:05:05 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/19 14:07:41 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	d = 0;
	s = 0;
	while (dest[d])
		d++;
	while (src[s])
		s++;
	if (size <= d)
		return (s + size);
	while (src[i] && (d + i) < (size - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}
