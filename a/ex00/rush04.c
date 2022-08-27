/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikorkut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:12:24 by ikorkut           #+#    #+#             */
/*   Updated: 2022/08/27 17:28:35 by enyetgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int uzunluk, char ilk, char orta, char son)
{
	int	harf;

	harf = 1;
	while (harf <= uzunluk)
	{
		if (harf == 1)
			ft_putchar(ilk);
		else if (harf == uzunluk)
			ft_putchar(son);
		else
			ft_putchar(orta);
		harf++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	sayac;

	sayac = 1;
	if (x >= 1 && y >= 1)
	{
		while (sayac <= y)
		{
			if (sayac == 1)
				ft_print(x, 'A', 'B', 'C');
			else if (sayac == y)
				ft_print (x, 'C', 'B', 'A');
			else
				ft_print (x, 'B', ' ', 'B');
			sayac++;
		}
	}
}
