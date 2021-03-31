/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:40:19 by frouable          #+#    #+#             */
/*   Updated: 2021/03/31 10:41:58 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lgs1;
	size_t	lgs2;
	char	*dest;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	lgs1 = ft_strlen(s1);
	lgs2 = ft_strlen(s2);
	dest = malloc(sizeof(char) * (lgs1 + lgs2) + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, lgs1);
	ft_memcpy(dest + lgs1, s2, lgs2);
	dest[lgs1 + lgs2] = '\0';
	return (dest);
}
