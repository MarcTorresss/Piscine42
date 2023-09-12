/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:07:56 by martorre          #+#    #+#             */
/*   Updated: 2023/08/14 11:43:49 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	array[5];

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			array[0] = '0' + i / 10;
			array[1] = '0' + i % 10;
			array[2] = ' ';
			array[3] = '0' + j / 10;
			array[4] = '0' + j % 10;
			write(1, array, 5);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
