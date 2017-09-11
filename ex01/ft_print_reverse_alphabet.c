#include <unistd.h>

int ft_putchar(char c)
{
	      write(1,&c,1);
		        return (0);
}
void ft_print_reverse_alphabet(void)
{
	    char c;
		    c=122;
			     while(c>=97)
					      {
							           ft_putchar(c);
									            c--;
												     }

}

    int main (void)
{
	    ft_print_reverse_alphabet();
		    return(0);
}
