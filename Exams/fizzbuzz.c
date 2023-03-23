#include<stdio.h>
#include<unistd.h>
void	write_num(int number)
{
	if(number > 9)
		write_num(number/10);
	write(1, "0123456789"[number % 10], 1);

int	main()
{
	int	number;

	number = 1;
	while (number < 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 1);
		if (number % 3 == 0)
			write(1, "fizz", 1);
		if (number % 5 == 0)
			write(1, "buzz", 1);
		else
			write_num(number);
		write(1, "\n", 1);
		number++;
	}
}
