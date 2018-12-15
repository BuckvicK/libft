/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 20:27:05 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/22 20:27:07 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	size_t	i;
	char	c;

	c = '\n';
	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
		i++;
	write(1, s, i);
	write(1, &c, 1);
}