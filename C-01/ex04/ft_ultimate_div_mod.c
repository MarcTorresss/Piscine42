/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:51:54 by martorre          #+#    #+#             */
/*   Updated: 2023/08/14 12:56:46 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *a / *b;
	*b = swap % *b;
}
/*
#include <stdio.h>
int	main(void)
{
	int a;
	int	b;

	a = 20;
	b = 4;
	ft_ultimate_div_mod(&a,&b);
	printf("La division de A i B = %d\n",a);
	printf("El resto de la division de A i B = %d",b);
}*/
