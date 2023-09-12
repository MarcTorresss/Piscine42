/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:20:49 by martorre          #+#    #+#             */
/*   Updated: 2023/08/14 16:05:31 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	array[] = {1,3,6,7,9,12,23,45,5,6,7,9};
	int	i = 0;
	ft_sort_int_tab(array, 12);

	while ((array[i]) != '\0' && i < 12)
	{
		printf("%d ,", array[i]);
		i++;
	}
}*/
