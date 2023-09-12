/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:04:22 by martorre          #+#    #+#             */
/*   Updated: 2023/08/21 14:13:10 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				out;

	out = 0;
	i = 0;
	while (i < n) 
	{
		if (src[i] != '\0' && out == 0)
			dest[i] = src[i];
		else
		{
			out = 1;
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "holaaaa";
	char	dest[] = "adeuaaa";
	int		i = 0;
	ft_strncpy(dest, src, 10);

	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
}*/
