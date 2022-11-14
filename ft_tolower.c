/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:18:15 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/14 11:55:15 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("%d\n", tolower('B'));
	printf("%d\n", ft_tolower('B'));
	return (0);
}*/
