#include<stdio.h>
#include<math.h>
int main ()
{
    int n,count=0,i,a=0;
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2==1) count++;
        n=n/2;
    }
    for(i=0;i<count;i++)
    {
        a=pow(2,i)+a;
    }
    printf("%d\n",a);
    return 0;
}
