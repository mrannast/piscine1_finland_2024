/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:08:49 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/23 15:25:35 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		i ++;
	}
	return (result);
}
/*#include <stdio.h>

int	main(void)
{
	int nbr = 5;

	printf("%d\n", ft_recursive_factorial(nbr));

}*/
