/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:40:05 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/17 21:25:00 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
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
    char    str1[] = "HELLOWORLD";
    char    str2[] = "12345";
    char    str3[] = "";
    char    str4[] = "AbCdEf123";

    printf("Is \"%s\" alpha: %d\n", str1, ft_str_is_uppercase(str1));
    printf("Is \"%s\" alpha: %d\n", str2, ft_str_is_uppercase(str2));
    printf("Is \"%s\" alpha: %d\n", str3, ft_str_is_uppercase(str3));
    printf("Is \"%s\" alpha: %d\n", str4, ft_str_is_uppercase(str4));
    return (0);
}*/
