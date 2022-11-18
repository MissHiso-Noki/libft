/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:48:32 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/18 11:25:17 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_str(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		n = n * -1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*rempli_str(char *str, int n, int len)
{
	int	start;

	str[len] = '\0';
	len = len - 1;
	if (n < 0)
	{
		n = n * -1;
		start = 1;
		str[0] = '-';
	}
	else
		start = 0;
	while (len >= start)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

static char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)malloc(sizeof(char) * size + 1);
	if (!new)
		return (NULL);
	while (i < size)
	{
		new[i] = '\0';
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	long long int	lln;

	lln = n;
	len = size_str(lln);
	if (lln < 0)
		len = len + 1;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str = rempli_str(str, lln, len);
	return (str);
}

// int main()
// {
// 	int	nbr;

// 	nbr = -54;
// 	printf("%s\n", ft_itoa(nbr));
// 	return (0);
// }
