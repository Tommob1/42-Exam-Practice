/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:49:05 by btomlins          #+#    #+#             */
/*   Updated: 2023/07/21 13:07:21 by btomlins         ###   ########.fr       */
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
	if (n > 0 && n % 2 == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
