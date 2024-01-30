/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:57:54 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/21 14:41:40 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main()
{
	char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "Hello";
    char str4[] = "hello";

    printf("Comparison \"%s\" and \"%s\" (n = 3): %d\n"
			, str1, str2, ft_strncmp(str1, str2, 3));
    printf("Comparison \"%s\" and \"%s\" (n = 5): %d\n"
			, str1, str3, ft_strncmp(str1, str3, 1));
    printf("Comparison \"%s\" and \"%s\" (n = 2): %d\n"
			, str1, str4, ft_strncmp(str1, str4, 2));

    return 0;
}*/
