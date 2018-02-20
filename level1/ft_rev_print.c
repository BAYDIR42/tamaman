#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char *a, char *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	*ft_rev_print(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		i++;
	}
	j = 0;
	while (i < j)
	{
		i--;
		ft_swap((&str[j]), (&str[i]));
		j++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(ft_rev_print(argv[1]));
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
