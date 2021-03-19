/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicorncorp <unicorncorp@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:37:50 by unicorncorp       #+#    #+#             */
/*   Updated: 2020/12/01 00:46:24 by unicorncorp      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		first_pos(char const *str, int c)
{
	int	i;

	i = 0;
	while (*(str + i) && *(str + i) == c)
		i++;
	return (i);
}

int		second_pos(char const *str, int c)
{
	int	i;

	i = 0;
	while (*(str + i) && *(str + i) != c)
		i++;
	return (i);
}

char	**clean_spilt(char **ptr)
{
	unsigned int	index;

	index = 0;
	while (ptr[index])
	{
		free(ptr[index]);
		index++;
	}
	free(ptr);
	return (NULL);
}

int		c_in_s(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
			n++;
		i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		str;
	int		num;
	int		first;
	int		second;

	second = 0;
	if (!s)
		return (NULL);
	num = c_in_s(s, c);
	str = 0;
	if (!(result = (char **)malloc((num + 1) * sizeof(char *))))
		return (NULL);
	while (str < num)
	{
		first = first_pos(((char *)s + second), c);
		first = first + second;
		second = second_pos(((char*)s + first), c);
		if (!(result[str] = ft_substr(s, first, second)))
			return (clean_spilt(result));
		str++;
		second = second + first;
	}
	result[str] = NULL;
	return (result);
}
