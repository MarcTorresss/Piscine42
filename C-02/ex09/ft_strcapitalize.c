/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:57:02 by martorre          #+#    #+#             */
/*   Updated: 2023/08/21 12:47:03 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	caracteresp(char c)
{
	int	i;

	i = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		i = 1;
	return (i);
}

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if ((caracteresp(str[i - 1]) == 0) && caracteresp(str[i]) == 1)
		{
			if (!(str[i -1] >= '0' && str[i -1] <= '9'))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	st[] = "salUt, comMUent tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(st);
	printf("%s", st);
}*/
