/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:22:14 by martorre          #+#    #+#             */
/*   Updated: 2023/08/21 15:06:28 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				acum;

	i = 0;
	acum = 0;
	while ((((s1[i] != '\0' || s2[i] != '\0') && acum == 0)) && i < n)
	{
		acum = s1[i] - s2[i];
		i++;
	}
	return (acum);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char			s1[] = "hola";
	char			s2[] = "holaa";
	unsigned	int	i = 0;
	unsigned	int	n = 4;
	//i = strncmp(s1,s2,n);
	i = ft_strncmp(s1,s2,n);
	printf("S1 = %s\n",s1);
	printf("S2 = %s\n",s2);
	printf("Em torna STRCMP = %d\n",i);
}*/
