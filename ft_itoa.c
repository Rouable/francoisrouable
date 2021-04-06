/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 10:06:10 by frouable          #+#    #+#             */
/*   Updated: 2021/04/06 10:16:07 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countingdigit(int n)
{
	int	lgnb;

	lgnb = 0;
	while (n != 0)
	{
		n = n / 10;
		lgnb++;
	}
	return (lgnb);
}

static char	*createstring(int n, int sign, int nbdigit)
{
	char	*dest;
	int		index;

	dest = malloc(sizeof(char) * nbdigit + 1);
	if (dest == NULL)
		return (NULL);
	index = nbdigit - 1;
	n = n * sign;
	while (n >= 10)
	{
		dest[index] = '0' + n % 10;
		n = n / 10;
		index--;
	}
	dest[index] = '0' + n;
	if (sign < 0)
		dest[0] = '-';
	dest[nbdigit] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	int	sign;
	int	nbdigit;

	nbdigit = 0;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
	{
		sign = 1;
		nbdigit = 1;
	}
	else
	{
		if (n < 0)
		{
			sign = -1;
			nbdigit++;
		}
		else
			sign = 1;
		nbdigit = nbdigit + countingdigit(n * sign);
	}
	return (createstring(n, sign, nbdigit));
}
