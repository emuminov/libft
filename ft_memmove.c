/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:06:20 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/08 14:47:02 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if (!src || !dest)
		return (0);
	if ((src == dest) || n == 0)
		return (dest);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else if (src > dest)
	{
		while (n)
		{
			*((char *) dest + n) = *((char *) src + n);
			n--;
		}
	}
	return (dest);
}
