/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:16:09 by marancib          #+#    #+#             */
/*   Updated: 2023/02/24 10:44:43 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (dest[i] != '\0')
		i++;
	while (src[o] != '\0')
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main (void)
{
	int i =0;
	char phrase1[]="buenas me llamo saul  ";
	char phrase2[]="y tengo un bocata en la mochila";
	char *str1;
	char *str2;
	char *word1;
	char *word2;
	int size=100;
	str1 = (char *) malloc(size);
	str2 = (char *) malloc(size);
	word1 = (char *) malloc(size);
	word2 = (char *) malloc(size);
	strcpy(str1, phrase1);
	strcpy(word1, phrase1);

	strcpy(str2, phrase2);
	strcpy(word2, phrase2);

	ft_strcat(str1, str2);
	strcat(word1, word2);
	while(str1[i]!='\0')
	{
		printf("%c",str1[i]);
		i++;
	}
	printf("\n");
	i=0;
	while(word1[i]!='\0')
	{
		printf("%c",word1[i]);
		i++;
	}
	return(0);
}*/