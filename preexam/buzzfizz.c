/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buzzfizz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:56:06 by martorre          #+#    #+#             */
/*   Updated: 2023/08/31 11:10:20 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int i)
{
	if (i >= 10)
	{
		putnbr(i / 10);
		putnbr(i % 10);
	}
	else
		putchar(i + '0');	
}

int	main(void)
{
	int	i;

	i = 1;
	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "buzzfizz", 8);
		else if (i % 3 == 0)
			write(1, "buzz", 4);
		else if (i % 5 == 0)
			write(1, "fizz", 4);
		else
		putnbr(i);
		i++;
		write(1, "\n", 1);
	}
	write(1, "100", 3);
}
