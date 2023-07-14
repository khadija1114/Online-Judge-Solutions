#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,i=0,a[3];
    scanf("%d",&t);

    for( ;i<t;i++)
    {
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        sort(a,a+3);
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) printf("Case %d: yes\n",i+1);
        else printf("Case %d: no\n",i+1);
    }
    return 0;
}
