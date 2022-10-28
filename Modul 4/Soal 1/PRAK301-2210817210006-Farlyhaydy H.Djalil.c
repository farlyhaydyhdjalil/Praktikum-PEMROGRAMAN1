#include <stdio.h>

int main()
{
    int a,b, i=0;
    while(i<=2){
    scanf("%d %d", &a,&b);
    if(a<b){
    printf("%d %d\n\n", a,b);
    }else if(b<a)
    printf("%d %d\n\n", b,a);
    i++;
    }
}

