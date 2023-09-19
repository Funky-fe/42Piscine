/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:55:55 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/19 17:32:35 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0' )
	{
		i++;
	}
	while (src[a] != '\0' )
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
