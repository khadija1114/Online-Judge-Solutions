#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i;
    float a,b,x,y,z,t1,t2,t,s1,s2,d;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>x>>y>>z>>a>>b;

        t1=x/a;
        t2=y/b;

       s1=x*t1-0.5*a*t1*t1 ;
        s2=y*t2-0.5*b*t2*t2;
        d=s1+s2;
        t=max(t1,t2);

        cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<d<<" "<<z*t<<endl;

    }
}
