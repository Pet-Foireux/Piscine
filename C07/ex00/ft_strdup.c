/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:45:07 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/28 13:59:27 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = 0;
	if (src == NULL)
		return (NULL);
	result = (char *)(malloc(sizeof(char) * ft_strlen(src)));
	if (result == NULL)
		return (NULL);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int	main()
// {
// 	printf("%s\n", ft_strdup("Shreked"));
// 	return 0;
// }
