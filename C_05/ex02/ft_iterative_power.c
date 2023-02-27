/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:22:11 by marancib          #+#    #+#             */
/*   Updated: 2023/02/27 16:40:48 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = 0;
	num = nb;
	if (power < 0)
		return (0);
	if(power<0 && nb nb>1)
		return(1);
	while (i < power - 1)
	{
		num = num * nb ;
		i++;
	}
	return (num);
}

/*int main(void)
{
	int num;
	num= ft_iterative_power(6,0);
	printf("%d", num);
	return(0);
}*/
