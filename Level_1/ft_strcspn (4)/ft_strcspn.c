/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);

     The strcspn() function spans the initial part of the null-terminated string s as long
     as the characters from s do not occur in the null-terminated string charset (it spans
     the complement of charset).  In other words, it computes the string array index of the
     first character of s which is also in charset, else the index of the first null
     character.
*/

#include <unistd.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
