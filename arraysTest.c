#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    printf("%d\n", arr[0]);
    printf("%d\n", arr[10]); 
    arr[10] = 42;
    printf("%d\n", arr[10]); 
    return 0;
}