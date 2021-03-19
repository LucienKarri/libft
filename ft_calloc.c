/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicorncorp <unicorncorp@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 06:00:18 by unicorncorp       #+#    #+#             */
/*   Updated: 2020/11/29 03:26:41 by unicorncorp      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;
	size_t	i;

	i = 0;
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	while (i < size * nmemb)
	{
		((char *)memory)[i] = '\0';
		i++;
	}
	return (memory);
}
