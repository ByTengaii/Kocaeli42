#include <unistd.h>

void ft_print_combn(int n) {
    int fd = 1;  // File descriptor for standard output (stdout)
    char buffer[3];  // Buffer to hold combination (2 digits + comma)

    for (int i = 0; i < 10 - n; i++) {
        buffer[0] = i + '0';  // Convert digit to character
        buffer[2] = ',';     // Comma character

        for (int j = i + 1; j < 10; j++) {
            buffer[1] = j + '0';  // Convert digit to character
            write(fd, buffer, 3);
        }
    }
}
int main() {
    int n = 7;
    ft_print_combn(n);
    return 0;
}

