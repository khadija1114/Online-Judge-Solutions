#include<bits/stdc++.h>
using namespace std;
double area(double a,double b,double c)
{
    double s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
double subarea(double r, double a, double b,double c)
{
    double theta=acos((a*a+b*b-c*c)/(2*a*b));
    return r*r*theta/2.0;
}
int main()
{
    int i,t;
    double r1,r2,r3,a,b,c,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r2+r3;
        c=r3+r1;
        ans=area(a,b,c)-subarea(r1,a,c,b)-subarea(r2,a,b,c)-subarea(r3,b,c,a);
        cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<ans<<endl;
    }
}
