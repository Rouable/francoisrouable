/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <frouable@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:51:27 by frouable          #+#    #+#             */
/*   Updated: 2021/03/29 12:35:20 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tempo_atoi(const char *ch, int sign)
{
	int	len;
	int	result;

	result = 0;
	len = 0;
	while (ft_isdigit(*ch))
	{
		len++;
		if (len > 13 && sign < 0)
			return (0);
		if (len > 13 && sign > 0 )
			return (-1);
		result *= 10;
		result += *ch - '0';
		ch++;
	}
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	result;
	int	len;

	index = 0;
	sign = 1;
	result = 0;
	len = 0;
	while (str[index] == ' ' || str[index] == '\n' || str[index] == '\t'
		|| str[index] == '\v' || str[index] == '\f' || str[index] == '\r')
		index++;
	if (str[index] == '+' || str[index] == '-')
		if (str[index++] == '-')
			sign *= -1;
	return (tempo_atoi(&str[index], sign));
}
