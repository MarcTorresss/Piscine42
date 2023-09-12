/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:30:57 by martorre          #+#    #+#             */
/*   Updated: 2023/08/25 13:08:04 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	doit(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	ind;
	int	print;

	i = 1;
	j = 0;
	ind = 0;
	print = 0;
	while (i < argc)
	{
		print = 0;
		while (argv[i] && print == 0)
		{
			j = i + 1;
			ind = 0;
			while (argv[j] && print == 0)
			{
				if (argv[i][ind] > argv[j][ind])
				{
					doit(argv[1]);
					print = 1;
				}
				else
					ind++;
				j++;
			}
			i++;
		}
	}
}
