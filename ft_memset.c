/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:06:31 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/08 00:06:32 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	if (!str)
		return (str);
	i = 0;
	ptr = str;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
