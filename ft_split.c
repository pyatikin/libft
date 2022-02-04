/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@stadent.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:10 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/25 20:00:39 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
static void	ft_free_memory(char ***strs, size_t max_size)
{
	size_t	i;

	i = 0;
	while (i < max_size)
	{
		free((*strs)[i]);
		i++;
	}
	free(*strs);
	*strs = NULL;
}

static void	ft_main_process(char ***strs, const char *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		len = 0;
		while (*s == c)
			s++;
		while (s[len] != c && s[len] != '\0')
			len++;
		if (len == 0)
			break ;
		(*strs)[i] = ft_substr(s, 0, len);
		if ((*strs)[i] == NULL)
		{
			ft_free_memory(strs, i);
			break ;
		}
		i++;
		s += len;
	}
}

static size_t	ft_get_word_count(const char *s, char c)
{
	size_t	word_count;

	word_count = (*s != c && *s != '\0');
	while (*s != '\0')
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
			if (*s == '\0')
				break ;
			word_count++;
		}
		s++;
	}
	return (word_count);
}

char	**ft_split(char const *s1, char c)
{
	char	**strs;
	size_t	word_count;

	strs = NULL;
	if (s1 != NULL)
	{
		word_count = ft_get_word_count((const char *)s1, c);
		strs = (char **)malloc(sizeof(char *) * (word_count + 1));
		if (strs != NULL)
		{
			strs[word_count] = NULL;
			ft_main_process(&strs, s1, c);
		}
	}
	return (strs);
}
