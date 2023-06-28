/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:16:54 by btomlins          #+#    #+#             */
/*   Updated: 2023/06/28 16:32:02 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

char	rot_13(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'M')
			putchar(str[i] + 13);
		else if (str[i] >= 'N' && str[i] <= 'Z')
			putchar(str[i] - 13);
		else if (str[i] >= 'a' && str[i] <= 'm')
			putchar(str[i] + 13);
		else if (str[i] >= 'n' && str[i] <= 'z')
			putchar(str[i] - 13);
		else
			putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (*str);
}

int main(int argc, char **argv)
{
	int i;
	i = 0;

	if(argc == 2)
		rot_13(argv[1]);
	else
		putchar('\n');
	return (0);
}

