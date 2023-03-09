#include <stdio.h>

int main() {
    // must specify size of the embedded list (after the first bracket)
    int foo[][2] = {{1,2}, {3,4}};
    int length = sizeof(foo)/sizeof(foo[0]);
    for(int i = 0; i < length; i ++) {
        printf("{");
        for(int j = 0; j < sizeof(foo[0])/sizeof(int); j ++) {
            printf("%d ", foo[i][j]);
        }
        printf("}");
        printf("\n");
    }
    return 0;
}