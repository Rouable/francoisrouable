/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 10:50:49 by frouable          #+#    #+#             */
/*   Updated: 2021/04/06 10:52:55 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	int		length;
	char	*dest;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	dest = malloc(sizeof(char) * length + 1);
	if (dest == NULL)
		return (NULL);
	index = 0;
	while (index < length)
	{
		dest[index] = (*f)(index, s[index]);
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
