/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicorncorp <unicorncorp@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:41:37 by unicorncorp       #+#    #+#             */
/*   Updated: 2020/11/29 03:27:56 by unicorncorp      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		lenght(long nb)
{
	int		lenght;

	lenght = 0;
	if (nb <= 0)
	{
		nb = nb * -1;
		lenght++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	char	*chislo;
	int		temp;
	int		ln;
	long	nb;

	nb = n;
	ln = lenght(nb);
	if (!(chislo = (char *)malloc(sizeof(char) * (ln + 1))))
		return (NULL);
	chislo[ln--] = '\0';
	if (nb == 0)
		chislo[0] = nb + '0';
	if (nb < 0)
	{
		nb = nb * -1;
		chislo[0] = '-';
	}
	while (nb > 0)
	{
		temp = nb % 10;
		nb = nb / 10;
		chislo[ln] = temp + '0';
		ln--;
	}
	return (chislo);
}
