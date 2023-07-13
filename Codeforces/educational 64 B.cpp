#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    scanf("%s",ch);
    int tmp,i,n=strlen(ch),m=n-1;
    for(i=0;i<n;i++)
    {
       if(ch[i]+1==ch[i+1]||ch[i]-1==ch[i+1])
       {
            tmp=ch[m];
            ch[m]=ch[i];
            ch[i]=tmp;
            m--;
       }

    }
    printf("%s",ch);
}
