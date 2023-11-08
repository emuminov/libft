/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:07:01 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/08 02:18:23 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest)
		return (dest);
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *(char *) (src + i);
		i++;
	}
	return (dest);
}
