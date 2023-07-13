#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,m=0;
    scanf("%d",&n);
    char a[5],c[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        c[i]=a[5];
    }
    for(i=0;i<n;i++)
    {
       if(strcmp(a,"OO|XX")==0) printf("yes");
    }}
     /* for(i=0;i<n*5;i++)
      {
          m=1;

       if(c[i]=='O'&&c[i+1]=="O"){

        c[i]='+';
        c[i+1]='+';
        printf("YES\n%s",c);
            break;
       }

      }
      if(m==1) printf("NO\n");
}
