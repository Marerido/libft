int     isdigit(int a)
{
        if (a >= '0' && a<= '9')
                return (1);
        else
                return (0);
}

#include <stdio.h>
int main(void)
{
        char c = 'a';
        printf("%d\n", isdigit(c));
        //printf("%d\n", isalpha(a));
        //printf("%d\n", isalpha(G));
}
