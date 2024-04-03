int	isalpha(int a)
{
	if ((a >= 'A' && a<= 'Z') || (a >= 'a' && a<= 'z'))
		return (1);
	else
		return (0);
}

#include <stdio.h>
int main(void)
{
	char c = 'w';
	printf("%d\n", isalpha(c));
	//printf("%d\n", isalpha(a));
	//printf("%d\n", isalpha(G));
}
