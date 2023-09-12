/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:50:49 by martorre          #+#    #+#             */
/*   Updated: 2023/08/24 13:18:00 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(int nbr, char *base)
{
	long	nb;
	int		baselen;

	nb = (long) nbr;
	baselen = ft_strlen(base);
	if (nb < 0)
	{
		nb = nb * -1;
		write (1, "-", 1);
	}
	if (nb >= baselen)
	{
		ft_putnbr(nb / baselen, base);
		ft_putnbr(nb % baselen, base);
	}
	else
		write(1, &base[nb], 1);
}

int	compchar(char *base)
{
	int	i;
	int	j;
	int	out;

	i = 0;
	j = 1;
	out = 0;
	while (base[i] != '\0' && out == 0)
	{
		j = i + 1;
		while (base[j] != '\0' && out == 0)
		{
			if (base[i] == base[j])
				out = 1;
			j++;
		}
		i++;
	}
	return (out);
}

int	compsign(char *base)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	while (base[i] != '\0' && out == 0)
	{
		if (base[i] == '-' || base[i] == '+')
			out = 1;
		i++;
	}
	return (out);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;

	baselen = ft_strlen(base);
	if (!((baselen == 0 || baselen == 1) 
			|| compsign(base) == 1 || compchar(base) == 1))
		ft_putnbr(nbr, base);
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(4, "01");
}*/
