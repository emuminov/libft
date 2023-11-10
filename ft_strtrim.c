/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:54:30 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/10 21:10:40 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int ft_char_in_str(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_char_in_str(set, s1[start]))
		start++;
	while (s1[end] && ft_char_in_str(set, s1[end]))
		end--;
	str = ft_substr(s1, start, end + 1);
	return (str);
}
