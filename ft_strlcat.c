/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:48:50 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/14 16:25:34 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	sizesrc;
	unsigned int	sizedest;
	unsigned int	i;

	i = 0;
	sizesrc = ft_strlen(src);
	sizedest = ft_strlen(dst);
	if (size == 0)
	{
		return (sizesrc);
	}
	if (size <= sizedest)
	{
		return (size + sizesrc);
	}
	while ((size -1) > (i + sizedest) && src[i] != '\0')
	{
		dst[sizedest + i] = src[i];
		i++;
	}
	dst[sizedest + i] = '\0';
	return (sizesrc + sizedest);
}

/*int main(void)
{
	char	*dest;
	char	*src;

	dest = "trucmuche";
	src = "help";

	printf("%ld\n", ft_strlcat(dest, src, 20));
	printf("%s\n", dest);
}*/
