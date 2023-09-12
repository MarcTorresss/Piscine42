/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:05:11 by martorre          #+#    #+#             */
/*   Updated: 2023/08/21 12:38:15 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 1;
	while (str[i] != '\0' && cont == 1)
	{
		if (str[i] >= 32 && str[i] <= 127)
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
	char	c[] = "holAA1AA";
	int	i;
	i = ft_str_is_printable(c);
	printf("Nos ha devuelto: %d",i);
}*/
