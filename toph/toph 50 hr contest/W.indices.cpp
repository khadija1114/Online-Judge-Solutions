#include<stdio.h>
int main()
{
    int n,i,a,b,sum=0;
    scanf("%d",&n);
    int ar[n];
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=a;i<=b;i++)
    {
        sum=sum+ar[i];
    }
    printf("%d\n",sum);
    return 0;
}
