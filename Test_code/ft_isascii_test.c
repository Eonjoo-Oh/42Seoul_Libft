#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int a = 0;

    printf("%d\n", isascii(a));
    printf("%d\n", ft_isascii(a));
}