#include <unistd.h>

void	ft_putnbr(int nb)
{
	char la_valeur;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	la_valeur = (nb % 10) + '0';
	write(1, &la_valeur, 1);
}

void	ft_swap(char **a, char **b)
{
	char *temp = *a;
	*a = *b;
	*b = temp;
}

int	comparateur(char *str)
{
	int i;
	int valeur;

	i = 0;
	valeur = 0;
	
	while (str[i])
	{
		valeur += str[i];
		i++;
	}
	return (valeur);
}
int	main(int argc, char **argv)
{
	int i;
	int j;
	
	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (comparateur(argv[i]) > comparateur(argv[j]))
			{
				ft_swap(&argv[i], &argv[j]);
			}
			j++;
		}
		i++;
	}

	i = 1;
	while (i < argc)
	{
		ft_putnbr(comparateur(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
