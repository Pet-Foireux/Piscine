/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:12:57 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/14 11:13:44 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	nombre;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		nombre = (nb % 10) + '0';
		write(1, &nombre, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/
