/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@stadent.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:49:22 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/25 17:05:09 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr( const void *arr, int c, size_t n)
{
	if (n == 0)
		return (NULL);
	while (*((char *)(arr)) != (char)(c) && --n)
		arr++;
	if (*(char *)(arr) == (char)c)
		return ((void *)(arr));
	else
		return (NULL);
}
