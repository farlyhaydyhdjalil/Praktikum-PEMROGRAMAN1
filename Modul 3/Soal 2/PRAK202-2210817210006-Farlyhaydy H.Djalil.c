#include <stdio.h>

int main()
{
    int i=0;
    while(i<=1){
    float a,b,c;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &b);
    c=a+b;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n\n", a,b,c);
    i++;
    }
}
