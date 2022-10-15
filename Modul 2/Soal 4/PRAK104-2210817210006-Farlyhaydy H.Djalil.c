#include<stdio.h>

int main()
{
float a,b,x,y, h1,h2;
a=400000;
b=350000;
x=13;
y=21;
h1=(a-x/100*a);
h2=(b-y/100*b);
printf("Harga sepatu A adalah %.f\n", a);
printf("Harga sepatu B adalah %.f\n", b);
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.f\n",h1);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.f\n",h2);
}


