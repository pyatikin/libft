/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:27:11 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/23 19:27:11 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		out_len;
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	out_len = s1_len + s2_len;
	res = malloc(sizeof(char) * (out_len + 1));
	if (!res)
		return (NULL);
	if (res)
	{
		ft_memcpy(res, s1, s1_len);
		ft_memcpy(&res[s1_len], s2, s2_len);
		res[out_len] = '\0';
	}
	return (res);
}
