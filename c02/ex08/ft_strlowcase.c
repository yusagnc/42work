/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 04:34:31 by yusa              #+#    #+#             */
/*   Updated: 2022/09/11 04:41:02 by yusa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "MEMO";
	char *a = ft_strlowcase(str);
	printf("%s", a);
}
