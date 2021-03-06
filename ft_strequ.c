/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:19:58 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/22 18:19:59 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	i = 0;
	while (s1 && s2 && (s1[i] == s2[i]))
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}
