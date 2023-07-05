/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:13:31 by btomlins          #+#    #+#             */
/*   Updated: 2023/07/05 14:25:15 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*str;
	
	i = 0;
	length = 0;

	while (src[length])
		length++;
	str = malloc(sizeof(*str) * (length + 1));

	if (str != NULL)
	{
		while (src[i])
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);

}
