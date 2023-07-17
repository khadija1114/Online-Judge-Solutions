#include<stdio.h>
#include<math.h>
int main()
{

    int a,n,i;
    scanf("%d",&n);
    a=n/10;
    printf("[");
    for(i=0;i<a;i++)
    {
        printf("+");
    }
    for(i=0;i<10-a;i++)
    {
        printf(".");
    }

    printf("]");
    a=floor(n);

    printf(" %d%%",a);

    return 0;
}

