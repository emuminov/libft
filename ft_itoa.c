/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:17:33 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/15 00:54:37 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_digits(int n)
{
	long	nbr;
	int		d;

	nbr = n;
	if (n == 0)
		return (1);
	if (n < 0)
		nbr = (long) -nbr;
	else
		nbr = (long) nbr;
	d = 0;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		d++;
	}
	return (d);
}

static int	ft_get_base(long n)
{
	long long	div;

	div = 1;
	while (div * 10 <= n)
		div *= 10;
	return (div);
}

char	*ft_itoa(int n)
{
	int		d;
	int		i;
	int		base;
	long	nbr;
	char	*str;

	d = ft_count_digits(n);
	str = malloc(sizeof(char) * (d + (n < 0) + 1));
	if (!str)
		return (0);
	i = 0;
	nbr = (long) n;
	if (n < 0)
	{
		str[i++] = '-';
		nbr = -nbr;
	}
	base = ft_get_base(nbr);
	while (d-- > 0)
	{
		str[i++] = nbr / base + '0';
		nbr %= base;
		base /= 10;
	}
	str[i] = '\0';
	return (str);
}
