/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:10:39 by martorre          #+#    #+#             */
/*   Updated: 2023/08/31 11:23:59 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *c)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (c[i] == '\r' || c[i] == '\v' || c[i] == '\f' 
		|| c[i] == '\n' || c[i] == '\f' || c[i] == ' ')
		i++;
	if (c[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (c[i] >= '0' && c[i] <= '9')
	{
		result *= 10;
		result += (c[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	int	n;
	n = ft_atoi("  --5a");
	printf("%d", n);
}
