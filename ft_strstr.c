/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 00:45:55 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/21 01:07:11 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (*str2 == '\0')
		return (char*)(str1);
	while (*(str1 + i) != '\0')
	{
		if (*(str1 + i) == *str2)
		{
			str2++;
			j++;
		}
		else
		{
			str2 = str2 - j;
			i = i - j;
			j = 0;
		}
		if (*str2 == '\0')
			return (char*)(str1 + i - j + 1);
		i++;
	}
	return (0);
}
