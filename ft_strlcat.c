/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicorncorp <unicorncorp@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 08:40:07 by unicorncorp       #+#    #+#             */
/*   Updated: 2020/11/29 03:30:41 by unicorncorp      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	d;

	n = 0;
	i = 0;
	d = 0;
	while (dst[d] != '\0')
		d++;
	while (src[i] != '\0')
		i++;
	if (size <= d)
		return (size + i);
	while (n + d < (size - 1) && src[n] != '\0')
	{
		dst[d + n] = src[n];
		n++;
	}
	dst[d + n] = '\0';
	return (d + i);
}
