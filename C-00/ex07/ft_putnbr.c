/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:39:24 by martorre          #+#    #+#             */
/*   Updated: 2023/08/18 13:42:58 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_printchar(char num)
{
	write(1, &num, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = (long) nb;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		write (1, "-", 1);
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_printchar(nbr + '0');
}

int	main(void)
{
	ft_putnbr(-2147483648);
}
