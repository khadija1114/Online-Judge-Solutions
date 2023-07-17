#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    char ch[1000];
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        int sum=0;
        scanf("%d",&b);
        for(j=0;j<b;j++)
        {
scanf("%[^\n]",&ch);
            for(k=0;ch[k]!='/0';k++)
            {
                sum=ch[k]-65+j+k;
            }


        }
        printf("%d\n",sum);

    }

    return 0;
}
