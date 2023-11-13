/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:06:20 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/13 19:38:18 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((src == dest) || n == 0)
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else if (dest > src)
	{
		i = n - 1;
		while ((int) i >= 0)
		{
			*((char *) dest + i) = *((char *) src + i);
			i--;
		}
	}
	return (dest);
}
