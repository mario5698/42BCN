/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:58:54 by marancib          #+#    #+#             */
/*   Updated: 2023/02/23 21:26:21 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	final;

	i = 1;
	if (power > 1)
		final = ft_recursive_power(nb, power - 1) * nb;
	else
		final = nb;
	return (final);
}

/*int main(void)
{
	int num;
	num = ft_recursive_power(5,3);
	printf("%d", num);
	return(0);
}*/