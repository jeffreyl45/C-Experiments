#include <stdio.h>

int main() {
    // const does not allow you to change the array
    const int input[] = {2,4,6,8};
    int length = sizeof(input)/sizeof(int);
    for (int i = 0; i < length ; i++) {
        printf("%d\n", input[i]);
    }
    return 0;
}