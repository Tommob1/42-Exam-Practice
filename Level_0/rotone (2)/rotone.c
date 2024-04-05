/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
*/

#include <unistd.h>

void   putchar(char c)
{
    write(1, &c, 1);
}

void    rotone(char *c)
{
    while (*c)
    {
        if ((*c >= 'A' && *c <= 'Y') || (*c >= 'a' && *c <= 'y'))
            putchar(*c + 1);
        else if (*c == 'Z' || *c == 'z')
            putchar(*c - 25);
        else
            putchar(*c);
        ++c;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    putchar('\n');
    return (0);
}
