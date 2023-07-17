#include<stdio.h>
int main ()
{
    int i,j=0,N[20];
    for(i=0;i<20;i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=19;i>=0;i--)
    {
        printf("N[%d] = %d\n",j,N[i]);
        j++;
    }
    return 0;
}
