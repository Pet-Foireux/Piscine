/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:21:30 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/08 18:43:18 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char            *ft_strcpy(char *dest, char *src)
       
	char *start = dest;
{
	while (*src != '\0'){
		*dest = *src;
		dest++;
		src++;
	}
	
	*dest = '\0';
	
	return start;

}

int main()
{
	char src[] = "Bonjour";
	char dest[10];
	
	ft_strcpy(dest, src);
	
	printf("Tiens mon gater tes chaine : %s\n", dest);
	
	return 0;
}
