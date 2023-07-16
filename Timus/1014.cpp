#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,q;

    scanf("%d",&n);
    for(i=0;i<sqrt(n);i++)
    {
        if(n%i==0) printf("%d%d\n",i,n/i);
    }
    return 0;
}
