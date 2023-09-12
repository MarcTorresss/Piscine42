/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:48:10 by martorre          #+#    #+#             */
/*   Updated: 2023/08/21 17:22:23 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	strrlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				lensrc;
	unsigned int	j;
	unsigned int	sizelen;

	i = strrlen(dest);
	sizelen = strrlen(dest);
	lensrc = strrlen(src);
	j = 0;
	if (size == 0)
		return (lensrc);
	if (dest == NULL)
		return (0);
	while (src[j] != '\0' && j < (size - 1))
	{
		dest[i] = src[j];
		j++;
		i++; 
	}
	dest[i] = '\0';
	if (size < lensrc)
		return (lensrc + size);
	else
		return (sizelen + size);
}
/*
#include <string.h>

int	main(void)
{
	char	src[10] = "Buenas";
	char	dest[15] = "Pep";
	int		i = 0;

	//i = strlcat(dest,src,2);
	i = ft_strlcat(dest,src,6);
	printf("SRC = %s\n",src);
	printf("DEST = %s\n",dest);
	printf("Return = %d\n",i);
}*/
