/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:25:23 by marancib          #+#    #+#             */
/*   Updated: 2023/02/21 16:05:25 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (dest[i] != '\0')
		i++;
	while (src[o] != '\0' && nb--)
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i++] = '\0';
	return (dest);
}

/*int main (void)
{	char s1[] = "phrase";
	char s2[] = "phrase";
	int num;

	num = 5;
	printf("%p", ft_strncat(s1, s2, num));
	return(0);
}*/