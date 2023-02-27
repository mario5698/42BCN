/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:43:05 by marancib          #+#    #+#             */
/*   Updated: 2023/02/22 16:32:18 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb == -2147483647)
		write(1, "-2147483647", 11);
	else
	{	
		if (nb < 0)
		{
			ft_putchar('-');
			n = -nb;
		}
		else
			n = nb;
		if (n > 9)
		{
			ft_putnbr(n / 10);
			n %= 10;
		}
		ft_putchar(n + '0');
	}
}

/*int main(void)
{	
	ft_putnbr(2147483647);	
	return(0);
}*/
