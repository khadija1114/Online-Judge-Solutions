#include <stdio.h>
int main ()
{
    int i,j,n,k;
    char c[20];
    gets(c);
    if (c[1]==' ')
    {
        n=c[0]-'0';
        i=2;
    }
    else
    {
        n=10;
        i=3;
    }
    k=i;
    while(c[i]=='!') i++;
    k=i-k;
    int sum = 1;
    for(i=n;i>0;i=i-k)
       {
           sum=sum*i;
       }
    printf("%d",sum);

}
