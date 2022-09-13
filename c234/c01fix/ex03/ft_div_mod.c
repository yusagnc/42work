/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huzun <huzun@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:14:18 by huzun             #+#    #+#             */
/*   Updated: 2022/08/31 20:14:34 by huzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 60;
	b = 8;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d" ,div);
	printf("\n%d", mod);
	return(0);
}*/
