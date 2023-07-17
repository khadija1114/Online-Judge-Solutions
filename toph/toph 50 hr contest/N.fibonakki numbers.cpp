#include<stdio.h>
int main()
{
    int n,a,b=1,c=1,i,sum=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        if(i==0||i==1) sum=1;
        else
        {
             sum=c+b;
             c=b;
             b=sum;
        }

    }
    printf("%d\n",sum);
}
