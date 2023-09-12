/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:46:46 by martorre          #+#    #+#             */
/*   Updated: 2023/08/29 11:33:47 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	if (nb == 0)
		return (result);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;

	n = ft_iterative_factorial(4);
	printf("%d",n);
}*/
