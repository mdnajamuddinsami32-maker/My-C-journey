// Problem 4: একটি দোকানে, Pen = 10 টাকা, Notebook = 50 টাকা হলে তুমি 3 টি pen এবং 2 টি notebook কিনতে মোট কত টাকা লাগবে ?
#include <stdio.h>
          int main(){

          int pen=10;
          int notebook=50;

           printf("3 ta pen= %dtk\n\n", pen*3);
            printf("2 ta notebook= %dtk\n\n", notebook*2);

           int pentotal=pen*3;
          int notebooktotal=notebook*2;

          printf("Total= %dtk", pentotal+notebooktotal);
          return 0;

          }


// or,     #include <stdio.h>
//         int main() {
//         int pen=10;
//         int notebook=50;
//         printf("Total= %d", (pen*3)+(notebook*2));
//         return 0;
//         }
