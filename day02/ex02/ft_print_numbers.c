/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:19:57 by marancib          #+#    #+#             */
/*   Updated: 2023/02/13 16:34:32 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	a ;

	a = '0';
	while (a <= '9')
	{
		write(1, &a, 1);
		a++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return(0);
}*/