#include <stdio.h>
int main() {
    int terms, added, count = 0, sum = 0;
    printf("How many terms would you like to add? ");
    scanf("%d", &terms);

    int array[terms];

    for (int i = 0; i < terms; i++) {
        printf("\n");
        printf("Enter a term: ");
        scanf("%d", &added);
        array[i] = added;
    }

    for (int j = 0; j < terms; j ++) {
        sum = sum + array[j];
    }
    printf("The sum is %d\n", sum);
}
