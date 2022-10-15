#include<stdio.h>

int main()
{
    int a,b,c,k,h,t;
    a=4;
    b=5;
    c=7;
    k=(a+b+c);
    h=85000;
    t=(k*h);
    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",a,b,c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
    printf("Harga tanah Per Meter adalah %d\n",h);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah :Rp %d", t);
}
