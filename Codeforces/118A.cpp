#include<stdio.h>
#include<string.h>

int main ()
{
    char ch[100];
    scanf("%s",ch);
    int n,i;
    n=strlen(ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||ch[i]=='y'||ch[i]=='Y')
            {

            }
            else
            {
               if(ch[i]>='A'&&ch[i]<='Z')
                {
                    ch[i]=ch[i]+32;
                }

                printf(".%c",ch[i]);
            }



    }
}
