/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:05:24 by frouable          #+#    #+#             */
/*   Updated: 2021/03/24 14:18:17 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (len == 0)
		return (dst);
	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
	{	
		while (len-- > 0)
			d[len] = s[len];
	}	
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}	
	return (dst);
}
