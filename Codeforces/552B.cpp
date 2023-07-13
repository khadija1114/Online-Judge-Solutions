#include<stdio.h>
int main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }

     for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
            b[j]=a[i];
            j++;

        }
    }
    m= b[1]-b[0];
    for(i=0;i<strlen(b);i++)
    {
       if(b[i]!=m+b[i+1])
       {
           printf("-1\n");
           break;
       }


    }

}
