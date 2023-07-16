#include<bits/stdc++.h>
using namespace std;
long long a[101][101];
int main()
{
    int n,m,i,j;
   // int a[101][101];
    a[1][1]=1;
    a[1][0]=1;
    for(i=2;i<=100;i++)
    {
        a[i][0]=1;
        for(j=1;j<=i;j++)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
     while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0) break;
        cout<<n<<" things taken "<<m<<" at a time is "<<a[n][m]<<" exactly."<<endl;
    }
}
