/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:08:14 by marancib          #+#    #+#             */
/*   Updated: 2023/02/24 10:44:50 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i ;

	i = 0;
	if (n < 1)
		return (0);
	n--;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && n--)
		i++;
	return (s1[i] - s2[i]);
}

/*int main(void)
{
	char s1[]="phrasota";
	char s2[]="phtasott";
	int num = 0;

	printf("ft_strcmp -> %d\n", ft_strncmp(s1, s2, num));
    printf("strcmp -> %d\n", strncmp(s1,s2,num));
	return(0);
}*/
