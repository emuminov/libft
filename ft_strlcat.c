/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:46:47 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/13 01:12:33 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	i;

	i = 0;
	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	while (src[i] && i < size)
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	if (size > dst_l)
		return (dst_l + src_l);
	return (size + src_l);
}
