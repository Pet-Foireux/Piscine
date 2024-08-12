/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:59:44 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/12 17:43:32 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
		if (to_find[j] == str[i])
		{
			return (to_find);
		}
	}return ("NULL");

}

int	main(void)
{
	char str[]="shrek et fiona sont le couple goal";
	char to_find[]="le";
	printf("%s", ft_strstr(str, to_find));
}
