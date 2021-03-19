/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicorncorp <unicorncorp@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:58:38 by unicorncorp       #+#    #+#             */
/*   Updated: 2020/11/29 03:30:31 by unicorncorp      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	i;
	unsigned char	n;
	char			*arr;

	i = 0;
	n = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	arr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		*(arr + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + n) != '\0')
	{
		*(arr + i + n) = *(s2 + n);
		n++;
	}
	*(arr + i + n) = '\0';
	return (arr);
}
