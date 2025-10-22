#include <stdio.h>

int main() {
    char name[50];   // string (character array)
    int age;         // integer
    char gender;     // single character

    printf("Enter your name: ");
    scanf("%s", name);   // name ইনপুট (string)

    printf("Enter your age: ");
    scanf("%d", &age);   // age ইনপুট (integer)

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);   // character ইনপুট (আগের newline skip করবে)

    printf("\n----- User Information -----\n");
    printf("Name   : %s\n", name);
    printf("Age    : %d\n", age);
    printf("Gender : %c\n", gender);

    return 0;
}
