/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:50:15 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/15 12:09:35 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{

	printf("%s", ft_substr("Je suis Chloe", 4, 10));
	return (0);
}*/
