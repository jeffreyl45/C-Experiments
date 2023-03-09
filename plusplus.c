#include <stdio.h>

int main(){
    int i = 1;
    int j = 1;
    int h = i++;
    int f = ++j;
    printf("%d\n", h);
    printf("%d\n", f);
    return 0;
}