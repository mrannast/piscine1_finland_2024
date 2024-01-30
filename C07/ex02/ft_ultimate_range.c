/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:48:25 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/29 17:01:09 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*#include <stdio.h>

int main() {
    int min = 1;  // Replace with your desired minimum value
    int max = 10; // Replace with your desired maximum value

    int *arr;
    int size = ft_ultimate_range(&arr, min, max);

    if (size == -1) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    } else if (size == 0) {
        printf("Error: min is greater or equal to max.\n");
        free(arr);
        return 1;
    }

    printf("Size of the range: %d\n", size);

    // Do something with the array 'arr' if needed

    free(arr);

    return 0;
}*/
