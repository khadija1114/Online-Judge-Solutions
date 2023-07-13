#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b,c,x,y,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>x>>y;
        if(a==0||a==1)
        {
            ans=0;
        }
        else if(b==0)
        {
            a=a/2;
            if(c<a) ans=y*c;
            else ans=y*a;
        }
        else if(c==0)
        {
            a=a/2;
            if(b<a) ans=x*b;
            else ans=x*a;
        }
        else{
            if(x>y)
            {
                a=a/2;
                 if(b<a)
                 {
                     ans=x*b;
                     a=a-b;
                     if(a>c)
                     {
                         ans=ans+y*c;
                     }
                     else ans=ans+y*a;
                 }
                 else ans=x*a;
            }

        else
            {
                a=a/2;
                 if(c<a)
                 {
                     ans=y*c;
                     a=a-c;
                     if(a>b)
                     {
                         ans=ans+x*b;
                     }
                     else ans=ans+x*a;
                 }
                 else ans=y*a;
            }
        }
        cout<<ans<<endl;
    }
}
