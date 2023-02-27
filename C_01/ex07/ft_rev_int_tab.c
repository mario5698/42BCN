/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:30:29 by marancib          #+#    #+#             */
/*   Updated: 2023/02/17 10:20:15 by marancib         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i <= (size / 2))
	{	
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}

/*int main(void)
{
	int	i = 0;
	int	numero = 5; 
	int	myNumbers[] = {23, 50, 100, 12, 32};
	
	ft_rev_int_tab(myNumbers,numero);
	while (i <= numero - 1)
	{
		ft_putnbr(myNumbers[i]);
		ft_putchar(' ');
		i++;
	}
	return(0);
}*/