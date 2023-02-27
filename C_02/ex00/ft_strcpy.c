/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:23:25 by marancib          #+#    #+#             */
/*   Updated: 2023/02/19 22:02:14 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
		dest[i++] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	letras[5] = {'h','o','l','a','\0'};
	char	letras2[5];
	int		i;

	ft_strcpy(letras2, letras);
	i = 0;
	while (i < 5)
	{
		write(1, &letras2[i], 1);
		i++;
	}
	return (0);
}*/