/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:33:41 by marancib          #+#    #+#             */
/*   Updated: 2023/02/20 20:48:56 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && src[i])
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	letras[5] = {'h','o','l','a','\0'};
	char	letras2[5];
	int		i;

	ft_strncpy(letras2, letras, 3);
	i = 0;
	while (i < 5)
	{
		write(1, &letras2[i], 1);
		i++;
	}
	return (0);
}*/