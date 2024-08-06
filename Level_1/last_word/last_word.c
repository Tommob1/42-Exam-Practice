/*
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
*/

#include <unistd.h>

void last_word(char *c)
{
    int i;
    int j;
    i = 0;
    j = 0;

    while (c[i])
    {
        if (c[i] == ' ' && c[i + 1] >= 33 && c[i + 1] <= 126)
            j = i + 1;
        i++;
    }
    while (c[j] >= 33 && c[j] <= 127)
    {
        write(1, &c[j], 1);
        j++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        last_word(argv[1]);        
    }
    write(1, "\n", 1);
    return (0);
}
