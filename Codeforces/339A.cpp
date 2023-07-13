#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int i,j,temp,n=strlen(s);
    for(i=0;i<n;i=i+2)
    {
        for(j=i+2;j<n;j=j+2)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("%s",s);

}
