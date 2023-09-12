/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:36:31 by martorre          #+#    #+#             */
/*   Updated: 2023/09/12 15:16:20 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cont(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	return (i);
}

int	contsig(char *str, int *i)
{
	int	cont;

	cont = 0;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			cont++;
		(*i)++;
	}
	return (cont);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = cont(str);
	sign = contsig(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	if (sign % 2 == 0)
		return (result);
	else
		return (result * -1);
}

#include <stdio.h>

int	main(void)
{
	//char	c[] = " -a)1234ab67";
	int		num;
	num = ft_atoi("-");
	printf("Return = %d",num);
}
