/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 22:49:55 by marancib          #+#    #+#             */
/*   Updated: 2023/02/27 22:50:00 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{	
	int				i;
	unsigned int	numero;

	i = 0;
	if (max <= min)
		return (0);
	if (min < 0)
		numero = (min * -1) + max;
	else
		numero = max - min;
	range = (int **)malloc(1 * sizeof(int *));
	range[0] = (int *)malloc(numero * sizeof(int));
	while (i < numero)
	{
		range[0][i] = min + i;
		printf("%d ", range[0][i]);
		i++;
	}
	return (1);
}

/*int	main(int arg, char **argv )
{
	int num;
	int	num1;
	int	num2;
	int	i;
	int **numeros;
	
	i = 0;
	if (arg > 1)
	{
		num1 =atoi(argv[1]);
		num2 =atoi(argv[2]);
		num = ft_ultimate_range(numeros,num1, num2);
		printf("\n%d", num);
	}
	return (0);
}*/