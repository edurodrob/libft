#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (fd < 0)
        return ;
    if (n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
        return ;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = n * -1;
    }
    if (n > 0)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n / 10, fd);
    }
    else
        ft_putchar_fd((n + '0'), fd);
}