/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@stadent.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:01:00 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/25 20:00:41 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"
#include	<stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		begin;
	int		end;
	int		s1_len;

	//str = ft_strdup("\0");
	str = NULL;
	if (set == NULL && s1 != NULL)
		str = ft_strdup(s1);
	else if (s1 != NULL)
	{
		begin = 0;
		s1_len = ft_strlen(s1);
		end = (int)s1_len;
		if (s1_len > 0)
			end--;
		while (s1[begin] != '\0' && ft_strchr(set, s1[begin]) != NULL)
			begin++;
		while (end >= 0 && ft_strchr(set, s1[end]) != NULL)
			end--;
		if (((int)(end) - begin + s1_len + 1) != 0)
			str = ft_substr(s1, (unsigned int)begin, (int)(end) - begin + 1);
		else
			str = ft_strdup("");
	}
	return (str);
}
