/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:35:57 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/23 19:35:57 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		dest_size;

	dest_size = 0;
	while ((dest[dest_size] != '\0') && (dest_size < size))
		dest_size++;
	i = dest_size;
	while (src[dest_size - i] && (dest_size + 1) < size)
	{
		dest[dest_size] = src[dest_size - i];
		dest_size++;
	}
	if (i < size)
		dest[dest_size] = '\0';
	return (i + ft_strlen(src));
}
