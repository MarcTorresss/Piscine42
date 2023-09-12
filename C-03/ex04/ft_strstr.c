/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:03:21 by martorre          #+#    #+#             */
/*   Updated: 2023/08/28 12:06:54 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (to_find[j] != '\0')
		{
			if (to_find[j] == str[i])
				j++;
			else
			{
				i = i - j;
				j = 0;
			}
		}
		else
			return (&str[i - j]);
		i++;
	}
	if (to_find[j] == '\0')
		return (&str[i - j]);
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "hola";
	char	find[] = "la";
	char	*re;
	re = ft_strstr(str,find);
	//re = strstr(str,find);
	printf("STR = %s\n",str);
	printf("FIND = %s\n",find);
	printf("Return = %s",re);
}
