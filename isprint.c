int     isalnum(int a)
{
        if (a >= 32 && a<= 126)
                return (1);
        else
                return (0);
}

#include <stdio.h>
int main(void)
{
        printf("%d\n", isalnum('c'));
        printf("%d\n", isalnum('1'));
        printf("%d\n", isalnum('+'));
}

