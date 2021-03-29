/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <frouable@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:58:23 by frouable          #+#    #+#             */
/*   Updated: 2021/03/29 17:38:23 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*tempo_strnstr(char *myhaystack, const char *needle, size_t len)
{
	size_t	indexcible;
	size_t	indexsource;

	indexcible = 0;
	while (myhaystack[indexcible] != '\0')
	{
		indexsource = 0;
		while (myhaystack[indexcible + indexsource] == needle[indexsource])
		{
			indexsource++;
			if (indexcible + indexsource == len + 1)
				return (NULL);
			if (needle[indexsource] == '\0')
				return (&myhaystack[indexcible]);
		}
		indexcible++;
		if (indexcible >= len)
			return (NULL);
	}
	return (0);
}	

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*myhaystack;

	myhaystack = (char *)haystack;
	if (needle[0] == '\0')
		return (myhaystack);
	if (len == 0)
		return (NULL);
	return (tempo_strnstr(myhaystack, needle, len));
}
