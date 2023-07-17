#include<stdio.h>
int main()
{
    int n,count=1,i;
    scanf("%d",&n);
    int a[n];
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=1;i<n;i++)
    {
            if(a[i]>=a[i-1])
                count++;
    }
    if(count==n) printf("Yes\n");
    else printf("No\n");
    return 0;
}
