#include<stdio.h>
int main()
{
    int i,j,n,a;
    scanf("%d",&n);
    if(n%2==0) a=n*n/2;
    else a=n*n/2+1;
    printf("%d\n",a);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%2==0&&j%2==0) printf("C");
            else if(i%2==0&&j%2!=0) printf(".");
            else if(i%2!=0&&j%2==0) printf(".");
            else if(i%2!=0&&j%2!=0) printf("C");
        }
        printf("\n");
    }

}
