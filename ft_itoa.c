/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:17:33 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/20 15:53:15 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_digits(int n)
{
	long	nbr;
	int		d;

	nbr = n;
	if (nbr < 0)
		nbr = -nbr;
	d = (nbr == 0);
	while (nbr > 0)
	{
		nbr /= 10;
		d++;
	}
	return (d);
}

char	*ft_itoa(int n)
{
	int		d;
	long	nbr;
	char	str[12];

	d = ft_count_digits(n);
	nbr = (long) n;
	if (n < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	str[d + (n < 0)] = '\0';
	while (d--)
	{
		str[d + (n < 0)] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (ft_strdup(str));
}
