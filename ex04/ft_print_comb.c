/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edioulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 00:44:57 by edioulou          #+#    #+#             */
/*   Updated: 2017/09/12 11:15:06 by achorfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_print_comb(void)
{
	int a;
	int b;
	int c;
	a = 0;

	ft_putchar(a);
	while (a<=7)
	{
		b=a+1;
		ft_putchar(b);
		while (b<=8)
		{
			c=b+1;
			while (c<=9)
			{
				ft_putchar(a+48);
				ft_putchar(b+48);
				ft_putchar(c+48);
				if(a != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;

		}
		a++;
	}
}

	
int main (void)
{
	ft_print_comb();
	return(0);
}

