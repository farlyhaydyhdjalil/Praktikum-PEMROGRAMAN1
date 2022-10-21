#include <stdio.h>

int main()
{
    int i=0;
    while(i<=1){
    int a,b,c,keliling,luas;
    scanf("%d %d", &a, &b);
    c=sqrt(pow(b,2)-pow(a,2));
    keliling=a + b + c;
    luas=0.5*c*a;
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n\n", luas);
    i++;
    }
}

