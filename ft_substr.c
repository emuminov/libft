/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:43:12 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/10 18:46:43 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = malloc(len + 1);
	while (s[start] && start < len)
	{
		str[start] = s[start];
		start++;
	}
	str[start] = '\0';
	return (str);
}
