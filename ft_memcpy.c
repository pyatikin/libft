/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:00:46 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/23 19:00:46 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t			counter;
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	dest_copy = dest;
	src_copy = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	counter = 0;
	while (num--)
	{
		dest_copy[counter] = src_copy[counter];
		counter++;
	}
	return (dest_copy);
}
