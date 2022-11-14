/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:04:24 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/14 11:55:34 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("%d\n", toupper('b'));
	printf("%d\n", ft_toupper('b'));
	return (0);
}*/
