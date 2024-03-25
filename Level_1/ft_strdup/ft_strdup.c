/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:35:50 by btomlins          #+#    #+#             */
/*   Updated: 2023/06/01 16:45:32 by btomlins         ###   ########.fr       */
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

char *ft_strdup(char *src)
{
	char	*strcpy;
	int 	i;
	int		length;
	
	i = 0;
	length = 0;

	while (src[length])
		length++;
	strcpy = malloc(sizeof(*strcpy) * (length + 1));

	if (strcpy != NULL)
	{
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}
