/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:13:08 by yusa              #+#    #+#             */
/*   Updated: 2022/09/11 01:36:27 by yusa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alphabet(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
		while (str[i] != '\0')
		{
			if ((str[i] >= 'A' && str[i] <= 'Z' ) || (str[i] >= 'a' && str[i] <= 'z' ))
			{
				i++;
			}
			else
			{
				return (0);	
			}
		}	
		return (1);
}

int	main(void)
{
	char str[] = "ksgjlejk123g1";
	int a = ft_str_is_alphabet(str);
	printf("%d", a);
}









