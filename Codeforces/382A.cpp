#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x=0;
    char ch[5];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",ch);
        if(strcmp(ch,"X++")==0) x=x+1;
         else if(strcmp(ch,"X--")==0) x=x-1;
        else  if(strcmp(ch,"++X")==0) x=x+1;
        else if(strcmp(ch,"--X")==0) x=x-1;
    }
    printf("%d",x);
    return 0;
}
