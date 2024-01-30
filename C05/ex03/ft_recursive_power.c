/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:00:57 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/25 18:52:20 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	count;
	int	result;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	count = 0;
	result = nb;
	while (power > count)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		count++;
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	int	pow = 3;
	int	nbr = 4;

	printf("%d\n", ft_recursive_power(nbr, pow));
}*/
