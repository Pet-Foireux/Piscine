/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:59:44 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/12 18:42:04 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			while (str[i] == to_find[i] && to_find[i] != '\0')
				i++;
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char str[]="shrek et fiona sont le couple goal";
	char to_find[]="go";
	printf("%s", ft_strstr(str, to_find));
}
*/
