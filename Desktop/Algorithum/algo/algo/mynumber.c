#include <stdio.h>
int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 1) {
            printf("%d\n", i);
        }
    }

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    for (int i = 1; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
