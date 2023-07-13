#include<bits/stdc++.h>
using namespace std;
vector <int> v(3005,0);
void sieve( )
{

   // memset(v,0,10000);
    int i,j;
    v[1]=1;

    for(i=2;i<=3005;i+=1)
    {

            if(!v[i])
            //v[i]==1;
            for(j=i;j<=3005;j+=i)
            {
                v[j]+=1;
               // cout<<v[j]<<endl;
            }
    }
}
int main()
{
    int     n,cnt=0;
    cin>>n;
    sieve( );
    for(int i=1;i<=n;i++)
        if (v[i]==2) cnt++;
    cout<<cnt<<endl;
}

