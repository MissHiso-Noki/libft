/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:49:18 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/15 15:50:11 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)

{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size != 0)
	{
		while (src[j] != '\0' && j < size)
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}

// int main ()
// {
// 	char	dest[100];
// 	char 	*src;

// 	src = "Je suis chelo";

// 	printf("%ld\n", ft_strlcpy(dest, src, 4));
// 	printf("%s\n", dest);
//  }
