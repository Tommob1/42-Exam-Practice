/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:24:31 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/04 15:37:30 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
*/

#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	while (n != '\0')
	{
		if (n % 2 == 0 || n == 1)
			return (1);
		else
			return (0);
	}
	return (0);
}
