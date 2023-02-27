/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:58:16 by marancib          #+#    #+#             */
/*   Updated: 2023/02/27 21:27:45 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{	
	int				i;
	int				*pointer;
	unsigned int	numero;

	i = 0;
	if (max <= min)
		return (pointer = NULL);
	if (min < 0)
		numero = (min * -1) + max;
	else
		numero = max - min;
	pointer = (int *)malloc(numero);
	while (i < numero)
	{
		pointer[i] = min + i;
		i++;
	}
	return (pointer);
}

/*int	main(int arg, char **argv )
{
	int	num1;
	int	num2;
	int	*ptrvoid;
	int	i;

	i = 0;
	if (arg > 1)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		ptrvoid = ft_range(num1, num2);
		if (ptrvoid != NULL)
		{
			while (i < 20)
			{	
				printf("%d ", ptrvoid[i]);
				i++;
			}
		}
	}
	return (0);
}*/