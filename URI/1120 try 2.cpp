#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100],b[100];
    int i,j,d;

    while( scanf("%d",&d)==1)
    {
        int  k=0;
        scanf("%s",&a);
         j=strlen(a);
    for(i=0;i<j;i++)
      {
        if(a[i]!=d)
           {
               b[k]=a[i];
              k++;
                //continue;
           }

       /* else
        {
             b[k]=a[i];
             k++;
             //printf("%",b[i]);
        }*/


      }
      printf("%s",b);

    }

}
