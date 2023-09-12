/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:40:09 by martorre          #+#    #+#             */
/*   Updated: 2023/08/21 12:33:01 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 1;
	while (str[i] != '\0' && cont == 1)
	{
		if (str[i] >= 48 && str[i] <= 57)
			cont = 1;
		else
			cont = 0;
		i++;
	}
	return (cont);
}
/*
#include <stdio.h>
int	main(void)
{
	char	c[] = "1";
	int	i;
	i = ft_str_is_numeric(c);
	printf("Nos ha devuelto: %d",i);
}*/
