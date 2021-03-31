/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <frouable@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 08:56:59 by frouable          #+#    #+#             */
/*   Updated: 2021/03/31 09:39:39 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	lgin;
	size_t	lgout;

	if (s == NULL)
		return (0);
	lgin = ft_strlen(s);
	if (start > lgin - 1)
	{
		dest = malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	if (lgin - start < len)
		lgout = lgin - start;
	else
		lgout = len;
	dest = malloc(sizeof(char) * lgout + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, &s[start], lgout);
	dest[lgout] = '\0';
	return (dest);
}
