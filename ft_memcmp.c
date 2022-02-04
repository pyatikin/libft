/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:50:15 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/23 18:50:15 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	const unsigned char		*buf1_copy;
	const unsigned char		*buf2_copy;
	size_t					n;

	buf1_copy = buf1;
	buf2_copy = buf2;
	n = 0;
	while (n < count)
	{
		if ((buf1_copy[n] > buf2_copy[n])
			|| (buf1_copy[n] < buf2_copy[n]))
			return ((int)(((buf1_copy))[n] - ((buf2_copy))[n]));
		n++;
	}
	return (0);
}
