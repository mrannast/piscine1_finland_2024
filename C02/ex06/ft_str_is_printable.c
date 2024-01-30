/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:29:29 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/18 14:52:19 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int main(void)
{
    char str1[] = "Hello World!";
    char str2[] = "123\n456";
    char str3[] = "";
    char str4[] = "Printable_@!#$%^&*()";
    char str5[] = "Unprintable \t\bControl Characters";

    printf("Is \"%s\" printable: %d\n", str1, ft_str_is_printable(str1));
    printf("Is \"%s\" printable: %d\n", str2, ft_str_is_printable(str2));
    printf("Is \"%s\" printable: %d\n", str3, ft_str_is_printable(str3));
    printf("Is \"%s\" printable: %d\n", str4, ft_str_is_printable(str4));
    printf("Is \"%s\" printable: %d\n", str5, ft_str_is_printable(str5));

    return 0;
}*/
