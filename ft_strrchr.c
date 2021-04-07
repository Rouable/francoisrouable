/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <frouable@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:05:24 by frouable          #+#    #+#             */
/*   Updated: 2021/04/07 12:09:58 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			index;
	unsigned char	*last;

	index = 0;
	last = NULL;
	while (1)
	{
		if (s[index] == (char) c)
			last = (unsigned char *)(s + index);
		if (s[index] == '\0')
			break ;
		index++;
	}
	return ((char *)last);
}
