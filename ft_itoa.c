/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@stadent.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:42:27 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/25 17:05:07 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_numlen(long long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_fillstr(long n, char *str, int i)
{
	int	size;

	size = ft_numlen(n) + i;
	while (n > 9)
	{
		str[--size] = (n % 10) + 48;
		n = n / 10;
	}
	str[--size] = n + 48;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	n_copy;

	n_copy = n;
	str = malloc(sizeof(char) * (ft_numlen(n_copy) + 1));
	if (str == NULL)
		return (NULL);
	str[ft_numlen(n_copy)] = '\0';
	i = 0;
	if (n_copy < 0)
	{
		str[i++] = '-';
		n_copy *= -1;
	}
	ft_fillstr(n_copy, str, i);
	return (str);
}
