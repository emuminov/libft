/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <emuminov@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:05:56 by emuminov          #+#    #+#             */
/*   Updated: 2023/11/13 16:20:40 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	char	chr;

	chr = (char) c;
	return (((chr >= 'a' && chr <= 'z')
			|| (chr >= 'A' && chr <= 'Z'))
		|| (chr >= '0' && chr <= '9'));
}
