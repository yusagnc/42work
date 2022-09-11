/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 04:04:58 by yusa              #+#    #+#             */
/*   Updated: 2022/09/11 04:31:56 by yusa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i]  -= 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "ali";
	char *a = ft_strupcase(str);
	printf("%s", a);
}
