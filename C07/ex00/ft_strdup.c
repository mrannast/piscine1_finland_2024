/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:38:15 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/29 15:35:17 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	size_t	i;
	char	*dest;

	if (src == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char *)malloc(i + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main() {
    const char* original = "Hello, World!";
    char* duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        // Print the duplicated string
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);

        // Don't forget to free the allocated memory
        free(duplicate);
    } else {
        // Handle memory allocation failure
        printf("Memory allocation failed\n");
    }

    return 0;
}*/
