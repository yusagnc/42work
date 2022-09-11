/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 01:38:53 by yusa              #+#    #+#             */
/*   Updated: 2022/09/11 02:07:53 by yusa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int 	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
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
	char str[] = "123123";
	int a = ft_str_is_numeric(str);
	printf("%d", a);
}
