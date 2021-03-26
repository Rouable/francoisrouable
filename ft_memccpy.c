/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:05:24 by frouable          #+#    #+#             */
/*   Updated: 2021/03/23 16:11:40 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	chr;
	int				finded;

	chr = c;
	finded = 0;
	if ((dst == NULL && src == NULL) || (n == 0))
		return (NULL);
	index = 0;
	while (index < n)
	{
		((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
		if (((unsigned char *)src)[index] == chr)
		{
			index++;
			finded = 1;
			return (&dst[index]);
		}
		index++;
	}
	if (finded == 0)
		return (NULL);
	return (dst);
}
