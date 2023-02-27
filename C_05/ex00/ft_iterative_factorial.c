/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:50:10 by marancib          #+#    #+#             */
/*   Updated: 2023/02/27 16:14:59 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nbr)
{
	int	i;
	int	num;

	i = 1;
	num = nbr;
	if (nbr < 0)
		return (0);
	if (nbr == 0)
		return (i);
	while (i < nbr)
	{
		num = num * i;
		i++;
	}
	return (num);
}

/*int main ()
{
	int num_factorial=0;
	num_factorial = ft_iterative_factorial(-10);

	printf("%d",num_factorial);
	return(0);
}*/
