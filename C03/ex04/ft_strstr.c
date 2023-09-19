/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:45:49 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/20 16:43:09 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	if (*to_find == '\0' )
		return (str);
	while (str[i])
	{
		if (*str == *to_find)
		{
			while (to_find[i])
			{
				if (str[i] != to_find[i])
					temp = 1;
				i++;
			}
			if (temp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
