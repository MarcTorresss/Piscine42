/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:28:26 by martorre          #+#    #+#             */
/*   Updated: 2023/08/21 12:34:49 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 1;
	while (str[i] != '\0' && cont == 1)
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) 
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
	char	c[] = "holAAAA";
	int	i;
	i = ft_str_is_alpha(c);
	printf("Nos ha devuelto: %d",i);
}*/
