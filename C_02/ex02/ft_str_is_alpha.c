/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:39:50 by marancib          #+#    #+#             */
/*   Updated: 2023/02/19 22:02:16 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '@' || str[i] > 'z' || (str[i] >= '[' && str[i] <= '`'))
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char letras[5]="bunds";
	int		i;
	i = ft_str_is_alpha(letras);
	i = i+48;
	write(1,&i,1);
	return (0);
}*/