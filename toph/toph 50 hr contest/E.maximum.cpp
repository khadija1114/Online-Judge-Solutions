#include<stdio.h>
int main()
{
    int n,max=0,i;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("%d\n",max);
}
