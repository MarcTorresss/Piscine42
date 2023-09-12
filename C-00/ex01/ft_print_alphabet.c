/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:31:54 by martorre          #+#    #+#             */
/*   Updated: 2023/08/11 10:30:56 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	lletra;

	lletra = 'a';
	while (lletra != 'z')
	{
		write(1, &lletra, 1);
		lletra++;
	}
	write(1, &lletra, 1);
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/
