/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:04:48 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/25 20:32:19 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	if (nb == 1)
	{
		return (1);
	}
	res = 0;
	while (res <= nb / 2)
	{
		if (res * res == nb)
		{
			return (res);
		}
		else
		{
			res++;
		}
	}
	return (0);
}
/*#include <stdio.h>

int main(void) 
{
    int	num;

    num = 1409865409;
	printf("Square root is: %d", ft_sqrt(num));
}*/
