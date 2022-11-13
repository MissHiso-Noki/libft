/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:57:02 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/10 14:49:34 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c);

int main()
{
		printf("%d\n", isascii('网'));
		printf("%d\n", ft_isascii('网'));
	return (0);
}
