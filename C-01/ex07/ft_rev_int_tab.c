/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:12:14 by martorre          #+#    #+#             */
/*   Updated: 2023/08/14 13:01:35 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	limit; 

	limit = (size / 2);
	i = 0;
	while (i < limit)
	{
		swap = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swap;
		i++;
		size--;
	}
}
/*
#include <stdio.h>
void	ft_putstr(int *str,int size)
{
	int	i;

	i = 0;
	printf("Array: ");
	while (i < size)
	{
		printf("%d",str[i]);
		i++;
	}
}
int	main(void)
{
	int tab[] = {1,2,3,4,5,6,7};
	int	size = 7;
	ft_rev_int_tab(tab,size);
	ft_putstr(tab,size);
}*/
