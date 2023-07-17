#include<stdio.h>
#include<math.h>
int main()
{
    float n;
    int a,i;
    scanf("%f",&n);
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
