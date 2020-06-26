/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooysen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:28:34 by dbooysen          #+#    #+#             */
/*   Updated: 2020/06/26 16:18:27 by dbooysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar (char c)
{
	write (1, &c, 1);
}

void ft_sastantua(int n)
{
	int c;
	int row;
	c = 1;
	row = 1;
	while (row <= n)
	{
		c = 1;
		while (c <= n - row)
		{
			putchar(' ');
			c++;
		}
		c = 1;
		putchar('/');
		while (c <= 2 * row - 1)
		{
			putchar('*');
			c++;
		}
		putchar('\\');
		putchar('\n');
		row++;
	}
}

int main ()
{
	ft_sastantua(10);
	return 0;
}






