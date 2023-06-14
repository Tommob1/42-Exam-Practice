/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:20:17 by btomlins          #+#    #+#             */
/*   Updated: 2023/06/14 15:24:59 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/

#include <unistd.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int i;
	int j;
	int *range;

	i = 0;
	j = end - start + 1;

	if (start > end)
		return (ft_rrange (end, start));
	range = (int *)malloc(sizeof(int) * j);
	if (range)
	{
		while (i < j)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	return (range);
}
