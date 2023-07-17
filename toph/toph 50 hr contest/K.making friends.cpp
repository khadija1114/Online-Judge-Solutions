
#include<stdio.h>
int main()
{
    int a,i,m=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            m++;
        }
    }
    printf("%d\n",m);
    return 0;

}

