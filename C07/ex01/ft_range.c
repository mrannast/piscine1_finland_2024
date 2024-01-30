/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:15:58 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/29 16:43:15 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*array;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*#include <stdio.h>

int main(void)
{
    int min = -50;
    int max = 50;

    int *result = ft_range(min, max);

    if (result == NULL)
    {
        printf("Error: Invalid range\n");
        return 1;
    }

    printf("Generated array:\n");
    for (int i = 0; i < max - min; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Don't forget to free the allocated memory
    free(result);

    return 0;
}*/
