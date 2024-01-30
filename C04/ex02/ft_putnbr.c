/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:19:24 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/22 16:28:58 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	n1;
	char	n2;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		n1 = nb + '0';
		ft_putchar(n1);
	}
	else
	{
		ft_putnbr(nb / 10);
		n2 = nb % 10 + '0';
		ft_putchar(n2);
	}
}
/*
int	main (void)
{
	int	nbr;

	nbr = -2147483648;
	ft_putnbr(nbr);
}*/
