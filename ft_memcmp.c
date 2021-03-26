/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:41:11 by frouable          #+#    #+#             */
/*   Updated: 2021/03/24 14:10:37 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				delta;
	size_t			index;
	unsigned char	*S1;
	unsigned char	*S2;

	delta = 0;
	index = 0;
	S1 = (unsigned char *)s1;
	S2 = (unsigned char *)s2;
	while (index < n)
	{
		delta = *S1 - *S2;
		if (delta)
			return (delta);
		S1++;
		S2++;
		index++;
	}	
	return (0);
}	
