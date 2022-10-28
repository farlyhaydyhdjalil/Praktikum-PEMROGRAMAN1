#include <stdio.h>

int main()
{
    int a,i=0;
    while(i<=4){
    scanf("%d", &a);
    if(a>=80){
        printf("A\n\n");
    }else if(a>=70 && a<=79){
        printf("B\n\n");
    }else if(a>=60 && a<=69){
        printf("C\n\n");
    }else if(a>=50 && a<=59){
        printf("D\n\n");
    }if(a<50)
        printf("E");
        
    }
    i++;
    }

