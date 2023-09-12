/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:50:16 by martorre          #+#    #+#             */
/*   Updated: 2023/08/30 12:44:58 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb) && nb <= 2147483647)
	{
		nb++;
	}
	if (ft_is_prime(nb))
		return (nb);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;

	n = ft_find_next_prime(2147183648);
	printf("%d", n);
}*/
