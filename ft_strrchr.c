/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:05:24 by frouable          #+#    #+#             */
/*   Updated: 2021/03/25 15:07:05 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		length;
	int		index;
	char	*tempo;

	length = ft_strlen(s);
	if (length == 0)
		return (NULL);
	tempo = (char *)s;
	if (c == 0)
		return (tempo + length);
	tempo = tempo + length - 1;
	index = length - 1;
	while (index >= 0 )
	{
		if (*tempo == c)
		{
			return (tempo);
		}
		tempo--;
		index--;
	}
	return (NULL);
}
