/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:43:37 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/21 22:43:43 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <assert.h>
#include <stdio.h>
int	main(void)
{
	char *test1 = ft_itoa(100);
	char *test2 = ft_itoa(-100);
	char *test3 = ft_itoa(2147483647);
	char *test4 = ft_itoa(-2147483648);
	char *test5 = ft_itoa(0);
	assert(ft_strcmp(test1, "100") == 0);
	assert(ft_strcmp(test2, "-100") == 0);
	assert(ft_strcmp(test3, "2147483647") == 0);
	assert(ft_strcmp(test4, "-2147483648") == 0);
	assert(ft_strcmp(test5, "0") == 0);
}
