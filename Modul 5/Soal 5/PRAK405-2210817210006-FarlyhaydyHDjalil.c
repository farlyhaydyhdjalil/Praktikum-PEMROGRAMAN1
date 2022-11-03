#include <stdio.h>
int main()
{
    int a,b,c=0,d=0,e=0;
    scanf("%d %d", &a, &b);
    for(int i=1; i<=a; i++)
    {
        c=i*b;
        d+=c;
        printf("(%d * %d)", i, b);
        if(i==1)
        {
            printf("= %d", d);
            e+=d;
            printf("\n");
        }
        if(i!=1)
        {
            for(int j=i-1; j>=1; j--)
            {
                if(j!=0)
                {
                    printf(" + ");
                    printf("(%d * %d)", j, b);
                }
                if(j==1)
                {
                    printf("= %d", d);
                    e+=d;
                }
            }
            printf("\n");
        }
    }
    printf("%d\n", e);
}
