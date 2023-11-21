/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:43:39 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/21 22:43:45 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <assert.h>
#include <stdio.h>
int	main(void)
{
	char *test1 = ft_itoa_base("0123456789abcdef", 100);
	char *test2 = ft_itoa_base("0123456789abcdef", -100);
	char *test3 = ft_itoa_base("0123456789abcdef", 2147483647);
	char *test4 = ft_itoa_base("0123456789abcdef", -2147483648);
	char *test5 = ft_itoa_base("0123456789abcdef", 0);
	assert(ft_strcmp(test1, "64") == 0);
	assert(ft_strcmp(test2, "-64") == 0);
	assert(ft_strcmp(test3, "7fffffff") == 0);
	assert(ft_strcmp(test4, "-80000000") == 0);
	assert(ft_strcmp(test5, "0") == 0);
}
