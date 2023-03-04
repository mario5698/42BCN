/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:23:15 by marancib          #+#    #+#             */
/*   Updated: 2023/02/16 18:25:08 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + '0');
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

//	ft_putnbr(div);
//	ft_putnbr(mod);
/*int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}*/