/*
* * * * * * *
  * * * * *
    * * *
      *
*/

#include <stdio.h>
int main(){
   for(int i=1; i<=4; i++){
      for(int j=1; j<i; j++){
         printf("  ");
      }
      for(int k=4; k>=i; k--){
         printf("* ");
      }
      for(int j=3;j>=i;j--){
            printf("* ");
      }
      printf("\n");
   }
   return 0;
}
