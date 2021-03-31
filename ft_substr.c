/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <frouable@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 08:56:59 by frouable          #+#    #+#             */
/*   Updated: 2021/03/31 09:20:52 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char *dest;
    //size_t i;
    size_t lgin;
    size_t lgout;
    //size_t j;

    if ( s == NULL ) return (0);
    lgin = ft_strlen(s);   
    if (start > lgin - 1)
    {
        dest = malloc(sizeof(char));
        dest[0]= '\0';
        return (dest);
    }    
    if (lgin - start < len )
        lgout = lgin -start;
    else
        lgout = len;    
    dest = malloc(sizeof(char)*lgout + 1);
    if (dest == NULL)
        return(NULL);
    //i = start;
    //j = 0;
    /*
    while (s[i] != '\0' && j < lgout)
    {
        dest[j] = s[i];
        i++;
        j++;
    }
    dest[j] ='\0'; */
    ft_memcpy(dest, &s[start], lgout);
    dest[lgout] ='\0';
    return (dest);
}

