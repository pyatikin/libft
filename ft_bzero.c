/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:35:34 by tgwin             #+#    #+#             */
/*   Updated: 2021/10/23 18:35:34 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(char *s, int n)
{
	int	counter;

	counter = 0;
	while (counter < n)
	{
		s[counter] = '\0';
		counter++;
	}
}
