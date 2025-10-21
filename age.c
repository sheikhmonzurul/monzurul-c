#include<stdio.h>
int main(){
int age;//integer variable
char name[50];//string variable (characyer array)
printf("Enter your name:");
scanf(" %s",name);

printf("Enter your age:");
scanf("%d",&age);

printf("Hello %s! You are %d years old.\n",name ,age);

return 0;
}
