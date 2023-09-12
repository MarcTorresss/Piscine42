/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:32:57 by martorre          #+#    #+#             */
/*   Updated: 2023/08/26 16:56:03 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int i, int x, int y)
{
	if (i == 0)
		write(1, "A", 1);
	else if (i == x)
		write(1, "C", 1);
	else
		write(1, "B", 1);
}
void	clc(int x, int y)
{
	int	i;

	i = 1;
	while (i < x)
	{
		ft_putchar(i,x,y);
		i++;
	}
}
int	main()
{
	rush(5, 5);
	return (0);
}
