/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:00:11 by marancib          #+#    #+#             */
/*   Updated: 2023/02/20 20:51:08 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*
int	ft_str_is_printable2(char str)
{
	
		if (!(str >= 32 && str <= 126))
		{
			return (0);
		}
	
	return (1);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + '0');
}*/

/*int	main(void)
{
	char letras[5]={'a',12};
	char letra=0;
	int		i;
	int o=0;
	int numer=48;
	numer += ft_str_is_printable(letras);

	write(1,&numer,1);

	while(o<=255){
		i = ft_str_is_printable2(letra+o);
			if(i==1){
				numer = o;
				ft_putnbr(o);
				write(1,"->",1);
				write(1,&numer,1);
				write(1,"\n",1);
			}else{
				ft_putnbr(o);
				write(1,"->",1);
				//write(1,&numer,1);
				write(1,"NO \n",4);}
			
		o++;
	}
	return (0);
}*/
