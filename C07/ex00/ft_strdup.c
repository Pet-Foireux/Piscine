/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:45:07 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/21 17:30:30 by mpapin           ###   ########.fr       */
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
	result = (char *)(malloc(sizeof(char) * ft_strlen(src)));
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	return (result);
}

int	main()
{
	printf("%s\n", ft_strdup("Shrek"));
	return 0;
}