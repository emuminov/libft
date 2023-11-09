/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:33:54 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/09 18:39:17 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	size;
	char	*str;
	
	if (!s)
		return (0);
	size = ft_strlen(s) + 1;
	str = malloc(size);
	if (!str)
		return (0);
	ft_memcpy(str, s, size);
	return (str);
}
