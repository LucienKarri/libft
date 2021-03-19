/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicorncorp <unicorncorp@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:39:22 by unicorncorp       #+#    #+#             */
/*   Updated: 2020/11/29 03:31:40 by unicorncorp      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	lenght;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	lenght = ft_strlen(s1);
	if (lenght == 0)
		return (ft_strdup(""));
	while (lenght > 0 && ft_strchr(set, s1[lenght]))
		lenght--;
	dest = ft_substr((char *)s1, 0, lenght + 1);
	return (dest);
}
