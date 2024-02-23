/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:32:52 by btomlins          #+#    #+#             */
/*   Updated: 2024/02/23 15:43:39 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	numbers(int num)
{
	char str[10] = "0123456789";

	if (num > 9)
	{
		numbers(num / 10);
	}
	write(1, &str[num % 10], 1);
}

int main(void)
{
	int i;
	i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			numbers(i);
		i++;
		write(1, "\n", 1);
	}
}
