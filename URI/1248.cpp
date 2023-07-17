#include<stdio.h>
#include<<string.h>
#include<algorithm>

using namespace std;

int main()
{
    char diet[27],brk[100],lun[27];
    int n,a,b,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        gets(diet); gets(brk); gets(lun);
        strcat(brk,lun);
        a=strlen(diet); b=strlen(brk);
        sort(diet,diet+a-1) ; sort(brk,brk+b-1);

        if(b>a)
        {
            ans=1;
            continue;
        }
        for(j=0;j<b;j++)
        {
            if
        }

    }

    return 0;
}
