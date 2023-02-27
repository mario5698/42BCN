/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marancib <marancib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:42:04 by marancib          #+#    #+#             */
/*   Updated: 2023/02/20 20:45:58 by marancib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_str_is_special(char str)
{	
	int	is_alpha;
	int	is_numeric;

	if (str <= '@' || str > 'z' || (str >= '[' && str <= '`'))
		is_alpha = 0;
	else
		is_alpha = 1;
	if (str > '0' && str < '9')
		is_numeric = 1;
	else
		is_numeric = 0;
	if ((is_alpha != 1 && is_numeric != 1))
		return (1);
	return (0);
}

int	is_lowercase(char str)
{
	int	is_alpha;

	if (str <= '@' || str > 'z' || (str >= '[' && str <= '`'))
		is_alpha = 0;
	else
		is_alpha = 1;
	if (is_alpha == 1)
	{
		if (str >= 'a' && str <= 'z')
			return (1);
	}
	return (0);
}

char	set_value(char str, int *words)
{
	if (*words == 0 && is_lowercase(str) == 1)
	{
		if (str >= 'a' && str <= 'z')
			str = str - ' ';
		*words = 1;
	}
	else
	{
		if (*words == 1 && is_lowercase(str) == 0)
		{
			if (str >= 'A' && str <= 'Z')
				str = str + ' ';
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{	
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (ft_str_is_special(str[i]) == 1)
				word = 0;
			if (str[i] > '0' && str[i] < '9')
					word = 1;
			str[i] = set_value(str[i], &word);
		}
		else
			word = 0;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	int	i;
	char	frase[100] = "esto es u+a FRas+e13234mkASdpk-asd+asd";
	ft_strlowcase(frase);
	ft_strcapitalize(frase);
	i = 0;
	while (frase[i] != '\0')
	{
		write(1, &frase[i], 1);
		i++;
	}
	return (0);
}*/