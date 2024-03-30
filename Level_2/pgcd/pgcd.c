/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    int j;

    if (argc == 3)
    {
        if((i = atoi(argv[1])) > 0 && (j = atoi(argv[2])) > 0)
        {
            while (i != j)
            {
                if (i > j)
                    i -= j;
                else
                    j -= i;
            }
            printf("%d", i);
        }
    }
    printf("\n");;
    return(0);
}
