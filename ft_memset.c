/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:06:31 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/13 01:11:37 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	if (!str)
		return (str);
	i = 0;
	while (i < n)
	{
		*((char *)str + i) = (unsigned char) c;
		i++;
	}
	return (str);
}
