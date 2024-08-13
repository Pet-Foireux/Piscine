/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:35:20 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/12 08:35:29 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

#include <unistd.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main() 
{
	char source[] = "EtShrek";
	char destination[7];
	
	ft_strncpy(destination, source, 7);
	printf("Source : %s\n", source);
	
	ft_strncpy(destination, "Fiona", 5);
	printf("Destination: %s\n", destination);
	
	return 0;
}
*/
