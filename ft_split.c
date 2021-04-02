/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <frouable@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 09:56:36 by frouable          #+#    #+#             */
/*   Updated: 2021/04/02 11:10:28 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countingword(char const *s, char c)
{
	size_t	nbwrd;
	int		index;

	nbwrd = 0;
	index = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c && s[index] != '\0')
		{
			index++;
		}
		if (s[index] != c && s[index] != '\0')
		{
			nbwrd++;
			while (s[index] != c && s[index] != '\0')
				index++;
		}
	}
	return (nbwrd);
}

static size_t	lenghtword(char const *s, char c)
{
	size_t	lgwrd;

	lgwrd = 0;
	while (s[lgwrd] != c && s[lgwrd] != '\0')
		lgwrd++;
	return (lgwrd);
}

static char	**createtab(char const *s, int c)
{
	size_t	nbword;
	char	**desti;

	nbword = countingword(s, c) + 1;
	desti = malloc(sizeof(char *) * nbword);
	if (desti == NULL)
		return (NULL);
	desti[nbword - 1] = NULL;
	return (desti);
}

static char	*createword(char const *str, int lgw)
{
	char	*dst;

	dst = malloc(sizeof(char) * lgw + 1);
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, str, lgw);
	dst[lgw] = '\0';
	return (dst);
}			

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		indexp;
	int		lgw;
	size_t	indexw;

	indexp = 0;
	indexw = 0;
	dest = createtab(s, c);
	if (dest == NULL)
		return (NULL);
	while (s[indexp] != '\0')
	{
		while (s[indexp] == c && s[indexp] != '\0')
			indexp++;
		if (s[indexp] != '\0')
		{
			lgw = lenghtword(&s[indexp], c);
			dest[indexw] = createword(&s[indexp], lgw);
			if (dest[indexw] == NULL)
				return (NULL);
			indexw++;
			indexp = indexp + lgw;
		}
	}
	return (dest);
}
