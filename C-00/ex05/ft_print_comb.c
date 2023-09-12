/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:35:35 by martorre          #+#    #+#             */
/*   Updated: 2023/08/14 11:46:18 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num;
	char	num2;
	char	num3;

	num = '0';
	while (num < '8')
	{
		num2 = num + 1;
		while (num2 < '9')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				write(1, &num, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				if (num != '7')
					write(1, ", ", 2);
				num3++;
			}
			num2++;
		}
		num++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
