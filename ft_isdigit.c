/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:35:33 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/10 14:52:27 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);

int main()
{
		printf("%d\n", isdigit('a'));
		printf("%d\n", ft_isdigit('a'));
	return (0);
}
