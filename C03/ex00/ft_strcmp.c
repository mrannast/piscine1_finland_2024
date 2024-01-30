/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:34:08 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/22 16:14:18 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
#include <stdio.h>

int main(void)
{
    // Test cases
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "hello";
    char str4[] = "HELLO";

	printf("Is \"%s\" and \"%s\" same: %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("Is \"%s\" and \"%s\" same: %d\n", str1, str3, ft_strcmp(str1, str3));
    printf("Is \"%s\" and \"%s\" same: %d\n", str1, str4, ft_strcmp(str1, str4));

    return 0;
}
