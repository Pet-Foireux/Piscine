/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:59:44 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/16 10:19:19 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[i] == '\0')
		return (to_find);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
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
	char str[]="";
	char to_find[]="4";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s", strstr(str, to_find));
	return (0);
}
*/
