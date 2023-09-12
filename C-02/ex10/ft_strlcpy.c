/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:16:06 by martorre          #+#    #+#             */
/*   Updated: 2023/08/21 12:39:16 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size == 0)
		return (i);
	while (dest[j] != '\0')
	{
		if (j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		else
			dest[j] = '\0';
	}
	return (i);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	unsigned int i = 0;
	char	s1[] = "Buenas Tardes";
	char	s2[] = "Malas Noches";

	//i=strlcpy(s2,s1,13);
	i=ft_strlcpy(s2,s1,0);
	printf("S1 = %s\n",s1);
	printf("S2 = %s\n",s2);
	printf("Lo que devuelve strlcpy: %d", i);
}*/
