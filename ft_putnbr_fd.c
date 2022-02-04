/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:17:16 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/23 19:17:16 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>

static size_t	ft_maxdiv(long long n)
{
	size_t	i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static long long	ft_pow(long long a, int b)
{
	if (b == 0)
		return (1);
	while (--b)
	{
		a = a * 10;
	}
	return (a);
}

static void	ft_file_output(long n, int fd)
{
	int		i;
	char	out;

	i = ft_maxdiv(n);
	while (i > 0)
	{
		out = n / ft_pow(10, i - 1) + 48;
		write(fd, &out, 1);
		n = n % ft_pow(10, i - 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	ft_file_output(nbr, fd);
}
