/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:21:55 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/18 10:44:32 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*str;

	str = (unsigned char *)malloc(nmemb * size);
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, nmemb);
	return (str);
}

// int main()
// {
// 	printf("%p\n", ft_calloc(5, 6));
// 	printf("%p\n", calloc(5, 6));
// 	return (0);
// }
