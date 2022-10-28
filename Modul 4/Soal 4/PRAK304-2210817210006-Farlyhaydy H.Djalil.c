#include <stdio.h>

int main()
{
    int a, i=0;
    while(i<=4){
    scanf("%d", &a);
    if(a>=1 && a<=9)
    printf("Satuan\n\n");
    else if(a<1 && a>-50){
    printf("Nol\n\n");
    }else if(a>99){
    printf("Anda Menginput Melebihi Limit Bilangan\n\n");
    }else if(a>=20 && a<=99){
    printf("Puluhan\n\n");
    }else
    printf("Belasan");
    i++;
    }
}

