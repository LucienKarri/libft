/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicorncorp <unicorncorp@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:18:41 by unicorncorp       #+#    #+#             */
/*   Updated: 2020/12/02 09:17:18 by unicorncorp      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (*(s + i) != '\0')
		i++;
	if (i < start)
	{
		if (!(array = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		array[0] = '\0';
		return (array);
	}
	if (!(array = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		array[i] = *(s + start + i);
		i++;
	}
	array[i] = '\0';
	return (array);
}
