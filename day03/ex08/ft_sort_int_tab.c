/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:22:53 by marancib          #+#    #+#             */
/*   Updated: 2023/02/16 18:26:51 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + '0');
}*/

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		x;
	int		rep;

	rep = size - 1;
	i = 0;
	x = 0;
	while (i < rep)
	{
		while (x < rep)
		{
			if (tab[x] > tab[x + 1])
			{
				ft_swap(&tab[x], &tab[x + 1]);
			}
			x++;
		}
		x = 0;
		i++;
	}
	i = 0;
}

/*int main()
{
	int	i;
	int	numero;
	int	myNumbers[] = {6,5,4,8,2,1,0};
	
	numero = 7;
	i = 0;
	ft_sort_int_tab(myNumbers, numero);
	while(i<numero){
		ft_putnbr(myNumbers[i]);
		ft_putchar(' ');
		i++;
	}
	return(0);
}*/