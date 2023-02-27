/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:14:32 by marancib          #+#    #+#             */
/*   Updated: 2023/02/22 16:31:08 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{	
		write(1, &*str, 1);
		str++;
	}
}

/*int main(void)
{	
	char phrase[]="esto es una frase un poco larga";
	ft_putstr(phrase);
	return(0);
}*/
