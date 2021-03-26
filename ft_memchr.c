/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:05:24 by frouable          #+#    #+#             */
/*   Updated: 2021/03/24 13:25:32 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	chr;
	size_t			index;
	unsigned char	*tempo;

	if (n == 0)
		return (NULL);
	chr = c;
	index = 0;
	tempo = (unsigned char *)s;
	while (index < n)
	{
		if (tempo[index] == chr)
		{
			return (&tempo[index]);
		}
		index++;
	}
	return (NULL);
}
