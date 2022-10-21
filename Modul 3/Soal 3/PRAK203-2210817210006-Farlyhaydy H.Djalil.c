#include <stdio.h>

int main()
{
    int i=0;
    while(i<=1){
    float a,b,i,j,x,y,jumlah;
    scanf("%f %f %f %f %f %f", &a,&b,&i,&j,&x,&y);
    jumlah = (a-b)*(i/j)-(x+y);
    printf("%.3f\n\n", jumlah);
    i++;
    }
}
