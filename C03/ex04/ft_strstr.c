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

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
		while(to_find[j] == str[i])
		{
			to_find++;
		}return (&str[i]);
	}return ("NULL");

}

int	main(void)
{
	char str[]="shrek et fiona sont le couple goal";
	char to_find[]="et";
	printf("%s", ft_strstr(str, to_find));
}
