#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c);

int	check_number(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Enter a positive number.\n", 25);
		return (1);
	}
	else if (x > INT_MAX || y > INT_MAX)
	{
		write(1, "Not in the range.\n", 17);
		return (1);
	}
	else
		return (0);
}

void	print_shape(int a, int b, int x, int y)
{
	if (a == 1 && b == 1)
		ft_putchar('/');
	else if (a == 1 && b == x)
		ft_putchar('\\');
	else if (a == y && b == 1)
		ft_putchar('\\');
	else if (a == y && b == x)
		ft_putchar('/');
	else if (a == 1 || a == y)
		ft_putchar('*');
	else if (b == 1 || b == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int a;
	int b;

	if(check_number(x, y))
		return ;
	a = 1;
	while (a <= y)
	{
		b = 1;
		while(b <= x)
		{
			print_shape(a, b, x, y);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}