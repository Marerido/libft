#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n);

int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
