/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huzun <huzun@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:14:53 by huzun             #+#    #+#             */
/*   Updated: 2022/08/31 20:14:55 by huzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}

/*int main(void)
{
	int a;
	int b;
	
	a = 60;
	b = 8;
	ft_ultimate_div_mod(&a, &b);
	printf("bolmenin sonucu : %d, kalan : %d", a, b);

}*/
