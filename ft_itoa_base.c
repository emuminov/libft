/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:41:14 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/22 00:01:58 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits_base(int n, size_t base_l)
{
	long	nbr;
	int		d;

	nbr = n;
	if (nbr < 0)
		nbr = -nbr;
	d = (nbr == 0);
	while (nbr > 0)
	{
		nbr /= base_l;
		d++;
	}
	return (d);
}

char	*ft_itoa_base(const char *base, int n)
{
	int		d;
	size_t	base_l;
	short	is_neg;
	char	*str;

	base_l = ft_strlen(base);
	if (!base_l)
		return (0);
	d = ft_count_digits_base(n, base_l);
	is_neg = (n < 0);
	str = malloc(sizeof(char) * (d + is_neg + 1));
	if (is_neg)
	{
		str[0] = '-';
		n = -n;
	}
	str[d + is_neg] = '\0';
	while (d--)
	{
		str[d + is_neg] = base[(n % base_l)];
		n /= base_l;
	}
	return (str);
}
