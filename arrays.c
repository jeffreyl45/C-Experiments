#include <stdio.h>

int main() {
    int c[(6+6)];
    float bar [] = {0.0,0.1,0.2,0.3};
    printf("%d\n", c);
    printf("%p\n", c);
    printf("[");
    for (int i = 0; i < 12; i++) {
        if (i < 11) {
            printf("%d, ", c[i]);
        } else {
            printf("%d]\n", c[i]);
        }
    }
}