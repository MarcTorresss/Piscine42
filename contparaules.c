/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contparaules.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:28:24 by martorre          #+#    #+#             */
/*   Updated: 2023/08/31 18:13:33 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	contparaules(char *c)
{
	int	i;
	int	cont;
	int	parau;

	i = 0;
	cont = 0;
	parau = 0;
	while (c[i] != '\0')
	{
		if (i == 0 && c[i] != ' ')
		{
			cont++;
		}
		else if ((i != 0) && (c[i -1] == ' ' && c[i] != ' '))
			cont++;
		i++;
	}
	return (cont);
}

int	main(void)
{
	char	c[] = " Hol 1 2 3 4 5  buenas tardes";
	int		ac;
	ac = contparaules(c);
	printf("%s\n",c);
	printf("%d palabras",ac);
}
