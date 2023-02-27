/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:43:13 by marancib          #+#    #+#             */
/*   Updated: 2023/02/26 19:57:43 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int				num;
	unsigned int	i;

	num = 5;
	if (nb < 1)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
	return (0);
}

/*int main(int arg, char **argv)
{
	int num=argv[1][0]-'0';
	int print_num=0;
	if(arg>1)
		printf("%d",ft_sqrt(num));
	return(0);
}*/