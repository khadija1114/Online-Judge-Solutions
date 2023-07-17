#include<stdio.h>
int main()
{
    int n,sum=0,i;
    double av;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        av=1.0*sum/(i+1);
        printf("%lf\n",av);

    }


}
