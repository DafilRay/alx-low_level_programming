#include <stdio.h>

void print_to_98(int n)
{
    if (n < 98) {
        printf("%d", n);
        for (int i = n + 1; i < 98; i++) {
            printf(", %d", i);
        }
    }
    printf(", 98\n");
}
