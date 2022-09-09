/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:09:22 by yusa              #+#    #+#             */
/*   Updated: 2022/09/09 01:49:32 by yusa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while(i <= (size /2))
	{
		tmp = tab[i];
		tab[i] = tab[size -1 -i];
		tab[size -1 -i] = tmp;
		i++;
	}
}

int	main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	printf("\n%d", size);
}
