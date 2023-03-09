#include <stdio.h>
int main(){
    char grade;
    printf("Enter grade: \n");
    scanf("%c", &grade);
    switch(grade) {
        case 'A':
            printf("good job ");
        case 'B':
            printf("You have met expectations\n");
            break;
        case 'C':
            printf("You need to study harder");
        case 'D':
            printf("At least you passed ");
            break;
        default:
            printf("not a proper grade\n");
            break;
    }
}