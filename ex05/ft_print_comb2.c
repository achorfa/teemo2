/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edioulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 08:09:48 by edioulou          #+#    #+#             */
/*   Updated: 2017/09/10 08:43:09 by edioulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_comb2(void)
{
	char table[4] = {0, 0, 0, 1};

	while (!((table [0] == 9 ) && (table[1] ==9)))
	{
		ft_putchar(table[0] + 48);
		ft_putchar(table[1] + 48);
		ft_putchar(' ');
		ft_putchar(table[2] + 48);
		ft_putchar(table[3] + 48);
		if (!((table[0] == 9) && (table[1] ==8)))
			ft_putchar('.');
		if (!((table[0] == 9) && (table[1] ==8)))
			ft_putchar(' ');
		table[3]++;
		
		if ((table[3] = table[3] % 10) == 0)
			table[2] = (table[2] +1);
			
		if (table[2] == 10)
			{
				table[2] = table [0];
				table[1]++;
				if (( table[1] = table[1] % 10) == 0)
					table[0]++;
				table[3] = table[1] +1;
			}
	}
}


int main(void)
{
	ft_print_comb2();
	return(0);
}
