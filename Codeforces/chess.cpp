#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d\n",n*n/2);
        for(j=0;j<n;j++)
        {

        if(j%2==0){
        for(i=0;i<n;i++)
        {
            if(i%2==0) printf("C");
            else printf(".");
        }
        printf("\n");
        }
        else{
             for(i=0;i<n;i++)
        {
            if(i%2==0) printf(".");
            else printf("C");
        }
        printf("\n");
        }
    }
    }
    else
    {
        printf("%d\n",n*n/2+1);
        for(j=0;j<n;j++)
        {

        if(j%2==0)
        {
        for(i=0;i<n;i++)
        {
            if(i%2==0) printf("C");
            else printf(".");
        }
            printf("\n");
        }


        else
        {
        for(i=0;i<n;i++)
        {
            if(i%2==0) printf(".");
            else printf("C");
        }
        printf("\n");
        }

    }

}
}
