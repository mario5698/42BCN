/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:31:28 by marancib          #+#    #+#             */
/*   Updated: 2023/02/27 17:52:59 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int arg, char **argv)
{
	int	num;
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (arg > 1)
	{
		while (i < arg)
		{
			num = get_length(argv[i]);
			while (num--)
				write(1, &argv[i][num], 1);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
