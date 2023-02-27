/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:39:40 by marancib          #+#    #+#             */
/*   Updated: 2023/02/20 20:51:21 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ' ';
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char letras[5]={'A','c','C','D'};
	int		i;
	ft_strlowcase(letras);
	i = 0;
	while(letras[i] != '\0'){
	write(1,&letras[i],1);
	i++;
	}
	return (0);
}*/