/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:17:34 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/28 16:25:13 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs) + size - 1);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}

#include <stdio.h>
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 4;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend";
	strs[2] = "you";
	strs[3] = "cool!";
	
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}