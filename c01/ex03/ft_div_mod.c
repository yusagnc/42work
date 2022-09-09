/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygenc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:56:45 by ygenc             #+#    #+#             */
/*   Updated: 2022/09/04 14:42:14 by ygenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int*mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	c;
	int	d;

	a = 20;
	b = 17;
	ft_div_mod(a, b, &c, &d);
	printf("%d", c);
	printf("\n%d", d);
	return (0);
}*/
