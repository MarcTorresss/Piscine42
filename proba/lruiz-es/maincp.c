/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:32:57 by martorre          #+#    #+#             */
/*   Updated: 2023/08/12 17:39:43 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}
void	print_line(int primoult, int y)
	{
		int	i;
		char c;
	
		i = 1;
		while (i <= y)
		{
			c = 'X';
			if(i ==1)
				c = 'A';
			else if (i == y)
				c = 'C';
			if ((c == 'X') && primoult)
		   		c = 'B';
			if ((c == 'X') && (!primoult))
				c = ' ';
			ft_putchar(c);
			i++;
		}
	ft_putchar('\n');
	}

void rush(xmax, ymax)
	{
		int i;
		int switch_fl_ll;

		i = 1;
		while (i <= ymax)
		{	
			switch_fl_ll = ((i == 1) || (i == ymax));
			print_line(switch_fl_ll, xmax);
			i++;
		}
	}		
int	main()
{
	rush(5,4);
	rush(1, 1);
	rush(10,8);
	rush(1,1);
	rush(-32,-55);
	rush(10,2);
	return (0);
}
