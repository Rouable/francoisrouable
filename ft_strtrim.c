/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <frouable@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:22:31 by frouable          #+#    #+#             */
/*   Updated: 2021/03/31 13:33:24 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	internal_ft_strtrim_is_in_str(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	internal_ft_strtrim_compute_boundary(const char *str,
													const char *set,
													size_t length, char step)
{
	size_t	bound;
	size_t	index;

	bound = 0;
	while (bound < length)
	{
		index = bound;
		if (step < 0)
			index = length - 1 - bound;
		if (!internal_ft_strtrim_is_in_str(str[index], set))
			return (index);
		bound++;
	}
	return (bound);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;
	size_t	start;
	size_t	end;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (NULL);
	length = ft_strlen(s1);
	start = internal_ft_strtrim_compute_boundary(s1, set, length, 1);
	end = internal_ft_strtrim_compute_boundary(s1, set, length, -1);
	if (start > end)
		length = 0;
	else
		length = end - start + 1;
	if (length <= 0)
		return (ft_strdup(""));
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1 + start, length);
	str[length] = '\0';
	return (str);
}
