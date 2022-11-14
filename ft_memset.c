/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:21:39 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/14 11:50:56 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = s;
	if (s == NULL)
	{
		return (NULL);
	}
	while (*p != '\0' && n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',11);
   puts(str);

   return(0);
}*/
