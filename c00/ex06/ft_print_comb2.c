/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:48:28 by yusa              #+#    #+#             */
/*   Updated: 2022/08/28 23:45:13 by yusa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#inculude <unistd>

void	ft_putchar(char c, b)
{
	write(1, &c, 1);
	write(1, &b, 1);
}
void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 00;
	b = 00;
	while(a <= 99)
	{
		b + 1;
		while(b == 99)
		{
			a + 1;
			ft_putchar(a, b);
		}
	}
}
int	main(void)
{
	ft_print_comb2();
	return = (0);
}
