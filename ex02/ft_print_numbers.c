#include <unistd.h>


int ft_putchar(char c)

{
	write(1,&c,1);
	return(0);
}

void ft_print_numbers(void)
{
		char number;
		number = 48;
		while ( number <= 57)

		{
			ft_putchar(number);
			number++;
		}

}
int main (void)
	 { 
		 ft_print_numbers();
	 	 return(0);
	}
