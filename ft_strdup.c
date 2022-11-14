/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:07:48 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/14 16:26:04 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	unsigned int	sizesrc;
	char			*dest;
	unsigned int	i;

	i = 0;
	sizesrc = ft_srlen(s);
	dest = malloc((sizesrc + 1) * sizeof(char));
	while (i < sizesrc)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
