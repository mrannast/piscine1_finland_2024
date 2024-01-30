/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:07:16 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/17 20:51:04 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int	main()
{
	char	str1[] = "erfrfbgrsbol";
	char	str2[] = "sdccEARF";
	char	str3[] = "";
	char	str4[] = "nvfje123";

	printf("Is \"%s\" lowercase: %d\n", str1, ft_str_is_lowercase(str1));
	printf("Is \"%s\" lowercase: %d\n", str2, ft_str_is_lowercase(str2));
	printf("Is \"%s\" lowercase: %d\n", str3, ft_str_is_lowercase(str3));
	printf("Is \"%s\" lowercase: %d\n", str4, ft_str_is_lowercase(str4));
}*/
