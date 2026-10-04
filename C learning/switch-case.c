#include <stdio.h>

int main(){
    int a,b;
    char operation;
    printf("Enter your firs digit:");
        scanf("%d", &a);
    printf("Enter an operator:");
        scanf("\n%c", &operation);
    printf("Enter your second digit:");
        scanf("%d", &b);


    switch(operation){
        case '+':
        printf("The sum is:%d", a+b);
        break;

        case '-':
        printf("The ans is:%d", a-b);
        break;

        case '*':
        printf("The multipication is: %d", a*b);
        break;

        case '/':
        printf("The division is: %d", a/b);
        break;

        default:
        printf("Sorry ! We don't know your command.");
    }

    return 0;
}