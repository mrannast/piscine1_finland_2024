/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:44:03 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/17 20:42:11 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
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
    char    str1[] = "HelloWorld";
    char    str2[] = "12345";
    char    str3[] = "";
    char    str4[] = "AbCdEf123";

    printf("Is \"%s\" num: %d\n", str1, ft_str_is_numeric(str1));
    printf("Is \"%s\" num: %d\n", str2, ft_str_is_numeric(str2));
    printf("Is \"%s\" num: %d\n", str3, ft_str_is_numeric(str3));
    printf("Is \"%s\" num: %d\n", str4, ft_str_is_numeric(str4));
    return (0);
}*/
