#include <stdio.h>

int main(){
float a,b;
printf("Enter your base:");
scanf("%f", &a);
printf("Enter your height:");
scanf("%f", &b);

/* এটি দ্বারা ক্ষেত্রফল হিসাব করা হয় */
printf("Your area is: %.2f", 0.5*a*b);
return 0;

}