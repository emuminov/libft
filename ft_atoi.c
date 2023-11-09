/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:50:50 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/09 18:04:17 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int atoi(const char *nptr)
{
	int		result;
	short 	sign;
	size_t	i;

	sign = 1;
	result = 0;
	i = 0;
	if (nptr[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while (nptr[i])
	{
		if (!ft_isdigit(nptr[i]))
			break;
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	return (result * sign);
}
