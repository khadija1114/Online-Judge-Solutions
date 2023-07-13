#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d",&x);
if(x%5==0) n=x/5;
if(x%5!=0)
        n=1+x/5;
    printf("%d",n);
    return 0;
}

