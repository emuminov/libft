/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:57:26 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/22 00:02:07 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"
#include <assert.h>
#include <stdio.h>
int	main(void)
{
	char *test1 = ft_ltoa_base("0123456789abcdef", 100);
	char *test2 = ft_ltoa_base("0123456789abcdef", -100);
	char *test3 = ft_ltoa_base("0123456789abcdef", 2147483647);
	char *test4 = ft_ltoa_base("0123456789abcdef", -2147483648);
	char *test5 = ft_ltoa_base("0123456789abcdef", 0);
	char *test6 = ft_ltoa_base("0123456789abcdef", UINT_MAX);
	assert(ft_strcmp(test1, "64") == 0);
	assert(ft_strcmp(test2, "-64") == 0);
	assert(ft_strcmp(test3, "7fffffff") == 0);
	assert(ft_strcmp(test4, "-80000000") == 0);
	assert(ft_strcmp(test5, "0") == 0);
	assert(ft_strcmp(test6, "ffffffff") == 0);
}
