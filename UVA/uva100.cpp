#include<stdio.h>
int main ()
{
    int i,j,t,m,c,u, n;
    while(scanf("%d%d",&i,&j)==2)
    {
        printf("%d %d",i,j);
        if(i>j)
        {
          u=i;
          i=j;
          j=u;
        }
        t=0;

        for(m=i;m<=j;m++)
    {
        c=1;
        n=m;
        while(n!=1)
            {
            if(n%2==0)
                n=n/2;
            else
                n=3*n+1;
            c++;

            }
        if(c>t)
          t=c;

    }
    printf(" %d\n",t);


    }


    return 0;
}
