#include<stdio.h>
#include<string.h>
int main()
{

    char a[200],b[200];
    scanf("%s%s",&a,&b);
    if(strcmp(a,b)==0) printf("%s\n",a);
    else printf("1\n");

    return 0;
}
