/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:57:52 by martorre          #+#    #+#             */
/*   Updated: 2023/08/14 17:49:56 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	num;

	num = '0';
	while (num != '9')
	{
		write(1, &num, 1);
		num++;
	}
	write(1, &num, 1);
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
