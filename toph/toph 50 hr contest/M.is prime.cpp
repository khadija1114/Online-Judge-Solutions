#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,m=0;
    scanf("%d",&a);
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            m++;
            break;
        }

    }
    if(m==0) printf("Yes\n");
    else      printf("No\n");

    return 0;
}
