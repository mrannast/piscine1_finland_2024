/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrannast <mrannast@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:07:50 by mrannast          #+#    #+#             */
/*   Updated: 2024/01/31 15:18:09 by mrannast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += str_len(strs[i]);
		i++;
	}
	len += str_len(sep) * (size - 1);
	if (size <= 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = create_str(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[k++] = sep[j++];
		}
	}
	str[k] = '\0';
	return (str);
}
/*
#include <unistd.h>

int ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    return (0);
}

int main()
{
    char *strs[] = {"Hello", "world", "from", "my", "brains"};
    char *sep = "**--__--**";
    char *result = ft_strjoin(2, strs, sep);

    if (result != NULL)
    {
        ft_putstr(result);
        free(result);
    }

    return 0;
}*/
