/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:17:33 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/13 01:11:08 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_digits(int n)
{
	long	nbr;
	int		d;

	nbr = n;
	d = 0;
	while (nbr)
	{
		nbr = nbr / 10;
		d++;
	}
	return (d);
}

static int	ft_get_first_digit(long n)
{
	long long	div;

	div = 1;
	while (div * 10 <= n)
		div *= 10;
	return (n / div);
}

char	*ft_itoa(int n)
{
	int		d;
	int		i;
	long	nbr;
	char	*str;

	d = ft_count_digits(n);
	str = malloc(sizeof(char) * (d + (n < 0)));
	if (!str)
		return (0);
	i = 0;
	nbr = (long) n;
	if (n < 0)
	{
		str[i] = '-';
		nbr = -nbr;
		i++;
	}
	while (d--)
	{
		str[i++] = ft_get_first_digit(nbr);
		nbr %= 10;
	}
	str[i] = '\0';
	return (str);
}
