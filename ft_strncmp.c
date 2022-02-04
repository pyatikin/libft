/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:43:58 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/23 19:43:58 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *string1, const char *string2, size_t num )
{
	int	i;

	i = 0;
	if (num == 0)
		return (0);
	while (--num && (string1[i] == string2[i]) && string1[i] && string2[i])
		i++;
	if (string1[i] == string2[i])
		return (0);
	else
		return ((unsigned char)(string1[i]) - (unsigned char)(string2[i]));
}
