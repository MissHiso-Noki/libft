/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:42:55 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/14 11:45:43 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int main()
{
		printf("%d\n", isalnum('-'));
		printf("%d\n", ft_isalnum('-'));
	return (0);
}*/
