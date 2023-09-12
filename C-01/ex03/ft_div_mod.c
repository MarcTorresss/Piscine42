/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:33:18 by martorre          #+#    #+#             */
/*   Updated: 2023/08/11 10:50:58 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int a;
	int	b;
	int	div;
	int	mod;
	
	a = 10;
	b = 2;
	ft_div_mod(a,b,&div,&mod);
	printf("La divisio de A i B es = %d\n",div);
	printf("La resta de la divisio de A i B = %d",mod);
}*/
