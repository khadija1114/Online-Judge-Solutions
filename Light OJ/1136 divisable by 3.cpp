#include<stdio.h>

int main()
{

    int a,b,i,t,j,count=0;
    long long int sum =0;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        count =0;
        scanf("%d%d",&a,&b);
        for(j=1;j<=a;j++)
        {
            sum=sum+j;
        }

        for(j=a;j<=b;j++)

        {
                if(sum%3==0) count++;
                sum=sum+j+1;

        }
        printf("Case %d: %d\n",i+1,count);

    }



    return 0;
}
