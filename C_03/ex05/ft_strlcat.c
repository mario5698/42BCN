/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:50:09 by marancib          #+#    #+#             */
/*   Updated: 2023/02/22 16:10:33 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include <string.h>
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (++i < size && *dest)
		dest++;
	if (i == size)
		return (i + (unsigned int)ft_strlen(src));
	j = -1;
	while (src[++j])
		if (j < size - i - 1)
			*dest++ = src[j];
	*dest = '\0';
	return (i + j);
}

/*int main (void)
{
	char s1[]={'h','o','l','a',' ','t'};
	char s2[]={'h','o','l','a',' ','t'};
	int num=0;
	int nbr=6;
	int num2=0;

	num = ft_strlcat(s2,s1,nbr);
	num2 = strlcat(s2,s1,nbr);
	printf("-----mi funcion--->%d\n", num);
	printf("-----mi strlcat--->%d", num2);	
	return(0);
}*/