/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:42:23 by marancib          #+#    #+#             */
/*   Updated: 2023/02/26 20:25:40 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 3 || !(nb % 2))
		return (nb == 2);
	i = 3;
	while (i * i <= nb)
	{
		if (!(nb % i))
			return (0);
		i += 2;
	}
	return (1);
}

/*int main(int arg, char **argv )
{
	if(arg>1)
	{
    	int num=0;
		int numero =(int) argv[1][0]-'0';
    	num = ft_sqrt(numero);
    	printf("%d", num);
	}
    return(0);
}*/
