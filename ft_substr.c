#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;

    i = 0;

    if (!s)
        return (NULL);
    if (ft_strlen(s) < start)
        return (ft_strdup(""));
    str = malloc(sizeof(char)*(len + 1));
    if (!str)
        return (0);
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
