#include <stdio.h>

int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}

int main()
{
    printf("%d", ft_isalpha(94));
}


