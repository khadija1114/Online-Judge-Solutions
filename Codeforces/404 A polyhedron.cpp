#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,m,cnt=0;
    scanf ("%d",&n);
    char ch[30];
    for(i=0;i<n;i++)
    {
        scanf("%s",ch);
        m=strlen(ch);
        if( strcmp(ch,"Tetrahedron")==0) cnt=cnt+4;
        if( strcmp(ch,"Cube")==0)cnt=cnt+6;

        if(strcmp(ch,"Octahedron")==0) cnt=cnt+8;
        if(strcmp(ch,"Dodecahedron")==0) cnt=cnt+12;
        if(strcmp(ch,"Icosahedron")==0) cnt=cnt+20;
    }
    printf("%d\n",cnt);
    return 0;

}
