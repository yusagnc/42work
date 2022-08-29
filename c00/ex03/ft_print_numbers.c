/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:43:20 by yusa              #+#    #+#             */
/*   Updated: 2022/08/28 17:59:51 by yusa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_numbers(void)
{
	char num;
	num = '0';

	while	(num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}
int	main(void)
{
	ft_print_numbers();	
	return (0);
}
