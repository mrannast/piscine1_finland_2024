/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:27:46 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/21 14:27:40 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
    // Test cases
    char str1[20] = "Hello, ";
    char str2[] = "world!";
    char str3[20] = "This is a ";

    // Test the ft_strncat function
    ft_strncat(str1, str2, 2);
    printf("Concatenated string: %s\n", str1);

    ft_strncat(str3, str2, 4);
    printf("Concatenated string: %s\n", str3);

    return 0;
}*/
