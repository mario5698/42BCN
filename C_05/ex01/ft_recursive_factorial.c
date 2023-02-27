/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:06:31 by marancib          #+#    #+#             */
/*   Updated: 2023/02/27 16:16:16 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{	
	int	i;
	int	num;

	i = 1;
	num = nb;
	if (nb < 0)
		return (0);
	if (nb > 1)
		num = ft_recursive_factorial(nb - 1) * nb;
	else
		num = 1;
	return (num);
}

/*int main(void)
{
	printf("%d", ft_recursive_factorial(7));
	return(0);
}*/
