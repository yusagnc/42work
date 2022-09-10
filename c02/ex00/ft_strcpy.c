/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygenc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:55:26 by ygenc             #+#    #+#             */
/*   Updated: 2022/09/10 19:21:01 by ygenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int c;
	c = 0;
	while(src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}

int	main()
{
	char src[] = "kopyalama";
	char dest[] = "copy";
	ft_strcpy(dest, src);
	printf("%s", dest);
	return(0);
}	
