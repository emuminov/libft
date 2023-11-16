/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:18:39 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/16 13:58:17 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
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

static void	ft_free_split(size_t k, char **strs)
{
	size_t	i;

	if (k == 0)
		return ;
	i = 0;
	while (i <= k)
	{
		free(strs[k]);
		i++;
	}
	free(strs);
}

static char	*ft_create_word(char const *s, size_t *i, char c)
{
	size_t	j;
	char	*word;

	j = 1;
	while (s[*i + j] && s[*i + j] != c)
		j++;
	word = ft_substr(s, *i, j);
	if (!word)
		return (0);
	*i += j;
	return (word);
}

static int	ft_free_on_fail(int k, char **strs)
{
	if (!strs[k - 1])
	{
		ft_free_split(k, strs);
		return (1);
	}
	return (0);
}

// added null protection and ft_free_on_fail for norminette
char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	k;

	if (!s)
		return (0);
	strs = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (0);
	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			strs[k++] = ft_create_word(s, &i, c);
			if (ft_free_on_fail(k, strs))
				return (0);
		}
	}
	strs[k] = 0;
	return (strs);
}
