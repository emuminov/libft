/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:06:20 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/13 18:05:11 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	if ((src == dest) || n == 0)
		return (dest);
	if (dest > src)
	{
		ft_memcpy(dest, src, n);
	}
	else if (dest < src)
	{
		i = ft_strlen(dest) - 1;
		j = ft_strlen(src) - 1;
		while (n)
		{
			*((char *) dest + i) = *((char *) src + j);
			i--;
			j--;
			n--;
		}
	}
	return (dest);
}
