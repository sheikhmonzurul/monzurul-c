#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 13) {
        printf("You are a Child.\n");
    }
    else if (age >= 13 && age < 20) {
        printf("You are a Teenager.\n");
    }
    else if (age >= 20 && age < 60) {
        printf("You are an Adult.\n");
    }
    else {
        printf("You are a Senior Citizen.\n");
    }

    return 0;
}
