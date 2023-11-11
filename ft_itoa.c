/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:17:33 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/11 20:38:34 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static short ft_count_digits(int n)
{
	long	nbr;
	short		d;

	nbr = n;
	d = 0;
	while (nbr)
	{
		nbr = nbr / 10;
		d++;
	}
	return (d);
}

// 738
// 10 ^ 1 = 10
// 10 ^ 2 = 100

static int ft_get_first_digit(int n)
{
	long	div;

	div = 1;
	while (div * 10 <= n)
		div *= 10;
	return (n / div);
}

// 738
// 38

char *ft_itoa(int n)
{
	int		d;
	long	nbr;
	short	i;
	char	*str;

	d = ft_count_digits(n);
	str = malloc(sizeof(char) * (d + (n < 0)));
	if (!str)
		return (0);
	i = 0;
	nbr = n;
	if (n < 0)
	{
		str[i] = '-';
		nbr = -nbr;
		i++;
	}
	while (d--)
	{
		str[i] = ft_get_first_digit(nbr);
		nbr %= 10;
		i++;
	}
	return (str);
}
