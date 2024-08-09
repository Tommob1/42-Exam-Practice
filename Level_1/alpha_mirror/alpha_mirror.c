/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
*/

#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

void alpha_mirror(char *c)
{
    while (*c)
    {
        if (*c >= 97 && *c <= 122)
            putchar('m' - (*c - 'n'));
        else if (*c >= 65 && *c <= 90)
            putchar('M' - (*c - 'N'));
        else
            putchar(*c);
        c++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        alpha_mirror(argv[1]);
    }
    putchar('\n');
}
