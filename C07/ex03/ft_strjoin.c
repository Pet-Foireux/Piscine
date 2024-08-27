/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:04:07 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/27 14:43:05 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	get_size(char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	j = 0;
	total = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			total++;
			j++;
		}
		j = 0;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	return (total + (i * total));
}

void	mettre_a_zero(int *i, int *j, int *k)
{
	*i = 0;
	*j = 0;
	*k = 0;
}

void	mettre_sep(char *sep, char *res, int *k)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		res[*k] = sep[j];
		j++;
		(*k)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	if (size <= 0)
		res = "";
	res = (char *) malloc(get_size(strs, size, sep) * sizeof(char));
	mettre_a_zero(&i, &j, &k);
	while (i < size && size > 0)
	{
		while (strs[i][j])
		{
			res[k] = strs[i][j];
			j++;
			k++;
		}
		if (i < size - 1)
			mettre_sep(sep, res, &k);
		j = 0;
		i++;
	}
	return (res);
}
/*
int    main(void)
{
	char    *strs[] = {"salut c'est", "J'aime les Zhommes"};
	char    *sep = " shrek. ";
	char    *res;

	res = ft_strjoin(2, strs, sep);
	printf("%s", res);
	free(res);          

	return (0);
}
*/