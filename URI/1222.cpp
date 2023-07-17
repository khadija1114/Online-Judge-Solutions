#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,c,n,i,line,page;
    char s[10000];

    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        scanf("%d%d%d",&a,&b,&c);
        int sum=a-1;

        for(i=0;i<a;i++)
        {
            scanf("%s",s);
            sum=sum+strlen(s);
        }
        if(sum%c==0) line=sum/c;
        else line=sum/c+1;

        if(line%b==0) page =line/b;
        else page=line/b+1;
        printf("%d\n",page);
    }


    return 0;
}
