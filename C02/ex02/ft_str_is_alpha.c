/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:19:59 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/18 17:48:49 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "HelloWorld";
	char	str2[] = "12345";
	char	str3[] = "";
	char	str4[] = "AbCdEf123";

	printf("Is \"%s\" alpha: %d\n", str1, ft_str_is_alpha(str1));
	printf("Is \"%s\" alpha: %d\n", str2, ft_str_is_alpha(str2));
	printf("Is \"%s\" alpha: %d\n", str3, ft_str_is_alpha(str3));
	printf("Is \"%s\" alpha: %d\n", str4, ft_str_is_alpha(str4));
	return 0;
}*/
