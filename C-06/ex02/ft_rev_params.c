/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:41:36 by martorre          #+#    #+#             */
/*   Updated: 2023/08/24 16:08:30 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	doit(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write (1, &c[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i; 

	i = argc;
	while (i > 1)
	{
		doit(argv[i -1]);
		i--;
	}
}
