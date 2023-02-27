/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:31:07 by marancib          #+#    #+#             */
/*   Updated: 2023/02/20 20:51:14 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ' ';
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char letras[5]={'a','B','c','d'};
	int		i;
	ft_strupcase(letras);
	i = 0;
	while (letras[i] != '\0'){
		write(1,&letras[i],1);
	i++;
	}
	return (0);
}
*/