/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:28:22 by marancib          #+#    #+#             */
/*   Updated: 2023/02/15 16:14:27 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main (void)
{	int num;
	//char *test = "buenas";
	char test[6] = {'h','o','l','a','\0'};

	num=48;
	num +=ft_strlen(test);
	write(1,&num,1);	
	return(0);
}*/