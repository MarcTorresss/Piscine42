/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:54:07 by martorre          #+#    #+#             */
/*   Updated: 2023/08/11 10:31:08 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lletra;

	lletra = 'z';
	while (lletra != 'a')
	{
		write(1, &lletra, 1);
		lletra--;
	}
	write(1, &lletra, 1);
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
