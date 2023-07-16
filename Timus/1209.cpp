#include<stdio.h>
#include<math.h>
int main()
{
    int i,t;
    long long int n;
    long double k;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf("%lld",&n);

        k=sqrt(8*n-7);
        if(floor(k)==ceil(k)) printf("1 ");
        else printf("0 ");


    }

    return 0;
}
