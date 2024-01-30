/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:17:15 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/18 14:50:04 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int main(void)
{
    // Test case
    char str[] = "hello WoRLD!";

    // Test the ft_strupcase function
    printf("Original string: %s\n", str);
    char *result = ft_strupcase(str);
    printf("Uppercase string: %s\n", result);

    return 0;
}*/
