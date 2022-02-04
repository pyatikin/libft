/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:46:20 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/23 19:46:20 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	char	c;
	char	sc;
	size_t	len;

	c = *find;
	if (c != '\0')
	{
		len = ft_strlen(find);
		while (ft_strncmp(s, find, len) != 0)
		{
			sc = *(s);
			while (sc != c)
			{
				sc = *s++;
				if (sc == '\0' || slen < 1)
					return (NULL);
				slen--;
			}
			s--;
			if (len > slen)
				return (NULL);
		}
	}
	return ((char *)s);
}
