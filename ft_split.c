/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:18:39 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/11 02:16:08 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_words(char const *s, char c)
{
	int		words;
	short	is_new_word;
	size_t	i;

	words = 0;
	is_new_word = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			is_new_word = 1;
		else if (s[i] != c && is_new_word)
		{
			is_new_word = 0;
			words++;
		}
		i++;
	}
	return (words);
}

char **ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;
	size_t	k;

	strs = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 1;
			while (s[i + j] && s[i + j] != c)
				j++;
			strs[k++] = ft_substr(s, i, j);
			i += j;
		}
	}
	strs[k] = 0;
	return (strs);
}
