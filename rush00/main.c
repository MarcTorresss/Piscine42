/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:32:57 by martorre          #+#    #+#             */
/*   Updated: 2023/08/12 14:58:17 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int i, int x, int y)
{
	int	cont;
	int	contt;
	int	j;
	int ix;

	cont = 0;
	j = 0;
	if (i == 0)
		write(1, "A", 1);
	else if (i == (x -1))
	{
		write(1, "C", 1);
		cont++;
	}
	else
		write(1, "B", 1);
	if (cont > 0)
	{
		while (j < (y - 2))
		{
			write(1, "\nB", 2);	
			j++;
			while (ix < (x - 2))
			{
				write(1, " ", 1);
				ix++;
			}
			write(1, "B", 1);
		}
	}
}
void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		ft_putchar(i,x,y);
		i++;
	}
}
int	main()
{
	rush(8, 8);
	return (0);
}
