#include<stdio.h>
int main()
{
    int n,m,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m<=10)
        {
            x=0;
            printf("%d %d\n",x,m);
        }
        else
        {
            x=m-10;
            printf("%d 10\n",x);
        }
    }
}
