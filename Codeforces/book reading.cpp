#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    long long n,m,a,b,ans,x,y,num;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(m>n||m%10==0) ans=0;
        else
        {
            a=m%10;

            num=n/m;
            if(a==5)
            {
                ans=(num/2)*5;
                if(num%2!=0) ans=ans+5;
            }

            else if(a&1)
            {
                ans=(num/10)*45;
                if(num%10!=0)
                {
                    x=num%10;
                    for(j=1;j<=x;j++)
                    {
                        ans=ans+(j*a)%10;
                    }
                }
            }

            else
            {
                ans=(num/5)*20;
                if(num%5!=0)
                {
                    x=num%5;
                    for(j=1;j<=x;j++)
                    {
                        ans=ans+(j*a)%10;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
