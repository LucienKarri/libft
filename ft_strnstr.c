/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicorncorp <unicorncorp@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 08:50:50 by unicorncorp       #+#    #+#             */
/*   Updated: 2020/11/29 05:21:13 by unicorncorp      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (*(little + i) == '\0')
		return ((char*)big);
	while (i < len && *(big + i) != '\0')
	{
		n = 0;
		if (*(big + i) == *(little + n))
		{
			while (*(big + i + n) == *(little + n) && i + n < len)
			{
				n++;
				if (*(little + n) == '\0')
					return ((char*)(big + i));
			}
		}
		i++;
	}
	return (0);
}
