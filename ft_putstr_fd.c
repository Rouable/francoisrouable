/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frouable <frouable@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:46:37 by ecaceres          #+#    #+#             */
/*   Updated: 2021/04/06 16:43:35 by frouable         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned char	*str;

	if (s == NULL)
		return ;
	str = (unsigned char *)s;
	while (*str)
		ft_putchar_fd(*str++, fd);
}
