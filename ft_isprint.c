/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:02:08 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/10 14:53:53 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c);

int main()
{
		printf("%d\n", isprint('f'));
		printf("%d\n", ft_isprint('f'));
	return (0);
}
