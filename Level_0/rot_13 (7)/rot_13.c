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
*/

#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

char  rot_13(char *c)
{
    int i;
    i = 0;

    while (c[i] != '\0')
    {
        if (c[i] >= 'A' && c[i] <= 'M')
            putchar(c[i] + 13);
        else if (c[i] >= 'N' && c[i] <= 'Z')
            putchar(c[i] - 13);
        else if (c[i] >= 'a' && c[i] <= 'm')
            putchar(c[i] + 13);
        else if (c[i] >= 'n' && c[i] <= 'z')
            putchar(c[i] - 13);
        else
            putchar(c[i]);
        i++;
    }
    putchar('\n');
    return(*c);
}

int main (int argc, char **argv)
{
    int i;
    i = 0;

    if (argc == 2)
    {
        rot_13(argv[1]);
    }
    else
        putchar('\n');
}
