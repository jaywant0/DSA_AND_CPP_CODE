#include <stdio.h>

int main() {
   
   // Bit stuffing 
   int a[15];
   int i;
   int cut;
   
   printf("\n Enter data to send in 0  and 1 ");

   for(int i = 0; i<15; i++){
    scanf("%d", &a[i]);
   }
   
   printf("in after bit stuffing \n ");

   for(i=0; i<15; i++){
    if(a[i] == 1){
      cut++;
      printf("%d",a[i]);
      if(cut == 5){
        printf("0");
        cut  = 0;
      }
    }
    else{
      printf("%d",a[i]);
      cut = 0;
    }
   }







  return 0;
}