#include <stdio.h>

int main()
{
   int N, i=0;
   while(i<=2){
   
   scanf("%d", &N);
   if(N>0){
   printf("positif\n\n");
   }else if(N<0){
   printf("negatif\n\n");
   }if(N==0)
   printf("nol");
   i++;
   }
}



