//Problem 5: .   তোমার কাছে: a = 100, b = 30, c = 20, প্রথমে a থেকে b বাদ দাও, তারপর যে ফলাফল পাবে সেখান থেকে c বাদ দাও। Output কত হবে?
#include <stdio.h>

int main(){
    int a=100;
    int b=30;
    int c=20;

    printf("First calculatin's answer is= %d\n\n", a-b);

    int d=a-b;

    printf("Final answer is= %d", d-c);

    return 0;
}


// a = 20, b = 10, c = 5, একটি expression ব্যবহার করে এমনভাবে হিসাব করো: 20 + 10 - 5, Output কত হবে?
//    #include <stdio.h>

//    int main(){
//    int a=20;
//    int b=10;
//    int c=5;

//    printf("Total solution is= %d", a+b-c);

//    return 0;
//    }