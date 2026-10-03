#include <stdio.h>

int main() {

    int age;
 
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >=18){
        printf("You can go to abroad.");
    }
    
    else if (age >=10){
        printf("You can go to college.");
    }

    else if (age >=5){
        printf("You can go to school.");
    }

    else if (age >=3){
        printf("You have to stay in your mother's care.");
    }

    else{
        printf("You have to wait for your parents permission.");
    }

    
    return 0;

}