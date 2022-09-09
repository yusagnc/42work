/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygenc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 22:03:39 by ygenc             #+#    #+#             */
/*   Updated: 2022/09/02 23:00:29 by ygenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	number;
	int	number1;

	number = 15;
	number1 = 20;
	ft_swap(&number, &number1);
	printf("%d", number);
	printf(",  ");
	printf("%d", number1);
	return (0);
}*/
