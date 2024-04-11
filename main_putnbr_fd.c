#include <unistd.h>

void ft_putnbr_fd(int n, int fd);

int main()
{
    int number = 12345;
    ft_putnbr_fd(number, 1); // 1 steht für stdout
    write(1, "\n", 1); // Fügt eine neue Zeile am Ende hinzu
    return 0;
}
