#include <stdio.h>

int main() {

    int age;
 
    printf("Enter your age: ");
    scanf("%d", &age);


    if (age >=18){
       
        printf("You can go to abroad.");
    }
    else{
        printf("You have to wait for your parents permission.");
    }


return 0;

}