/* Write a C program that takes a student's Science and Math marks as input and gives a reward according to the following rules:

যদি Science ≥ 80 এবং Math ≥ 80 হয় → 50 টাকা reward পাবে।
যদি শুধু Science ≥ 80 হয় → 25 টাকা reward পাবে।
যদি শুধু Math ≥ 80 হয় → 20 টাকা reward পাবে।
যদি Science ≥ 50 এবং Math ≥ 50 হয় → Pass করবে।
অন্যথায় → Fail করবে । */
//Use if, else if, else, and logical operator &&.


#include <stdio.h>

int main(){
   int math,science;
   printf("Enter your science mark:");
    scanf("%d", &science);

    printf("Enter your math mark:");
    scanf("%d", &math);


    if( science>=80 && math>=80){
        printf("You will get 50tk");
    }        
    
    else if(science>=80){
        printf("You will get only 25tk");
    }
    
    else if(math>=80){
        printf("You will get only 20tk");
    }

    else if(science>=50 && math>=50){
        printf("Mara kaw. Result karap tumar.");
    }

    else{
        printf("You are fail.");
    }

    return 0;
    
}