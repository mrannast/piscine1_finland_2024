/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:22:16 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/23 15:26:35 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	result;

	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 || power == 0)
	{
		return (1);
	}
	count = 1;
	result = nb;
	while (power > count)
	{
		result *= nb;
		count++;
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	int	pow = 2;
	int	nbr = 3;

	printf("%d\n", ft_iterative_power(nbr, pow));
}*/
