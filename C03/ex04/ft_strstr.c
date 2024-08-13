/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:59:44 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/13 08:40:48 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
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
int	main(void)
{
	char str[]="shrek et fiona go  couple goal";
	char to_find[]="go";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}
