/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:11:16 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/14 11:46:00 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)

{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int main()
{
		printf("%d\n", isalpha('E'));
		printf("%d\n", ft_isalpha('E'));
	return (0);
}*/
