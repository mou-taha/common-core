#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n) {
    unsigned char *d = dest;
    const unsigned char *s = src;

    if (d == s || n == 0) {
        return dest;
    }

    if (d < s) {
        for (size_t i = 0; i < n; i++) {
            d[i] = s[i];
        }
    } else {
        for (size_t i = n; i != 0; i--) {
            d[i - 1] = s[i - 1];
        }
    }

    return dest;
}

int main() {
    char data[] = "abcdef";

    printf("Before: %s\n", data);

    // Overlapping regions: move 4 bytes from data[0] to data[2]
    ft_memmove(data + 2, data, 4);

    printf("After:  %s\n", data);

    return 0;
}
