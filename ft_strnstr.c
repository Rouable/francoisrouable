/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:58:23 by frouable          #+#    #+#             */
/*   Updated: 2021/03/26 10:59:51 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	indexcible;
	size_t	indexsource;
	char	*myhaystack;

	myhaystack = (char *)haystack;
	if (needle[0] == '\0')
		return (myhaystack);
    CHECK_COND(len == 0)	
	indexcible = 0;
	while (myhaystack[indexcible] != '\0')
	{
		indexsource = 0;
		while (myhaystack[indexcible + indexsource] == needle[indexsource])
		{
			indexsource++;
			CHECK_COND(indexcible + indexsource == len + 1);
			if (needle[indexsource] == '\0')
				return (&myhaystack[indexcible]);
		}
		indexcible++;
		CHECK_COND(indexcible >= len);
	}
	return (0);
}