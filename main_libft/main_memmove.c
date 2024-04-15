#include <stdio.h>

void *ft_memmove(void *str1, const void *str2, size_t n);

int main () {
   char dest[];
   const char src[]  = "conseipsum dolor sit a";:

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
