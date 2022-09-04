/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygenc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:19:34 by ygenc             #+#    #+#             */
/*   Updated: 2022/09/04 18:58:01 by ygenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

int	main(void)
{
	int	div;
	int	mod;

	div = 20;
	mod = 3;
	ft_ultimate_div_mod(&div, &mod);
	printf("%d, %d", div, mod);
	return (0);
}
