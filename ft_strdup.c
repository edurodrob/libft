#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *str;
    size_t  len;
    size_t  i;
    
    len = ft_strlen(s) + 1;
    str = (char *)malloc(sizeof(char) * len);
    i = 0;

    if (!(str))
        return (NULL);
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
