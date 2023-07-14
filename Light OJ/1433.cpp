#include<bits/stdc++.h>
using namespace std;
//#define pi 3.14159265
int main()
{
    double ax,bx,ay,by,ox,oy,ab,oa,theta,rad,abc,pi=3.141592454;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        oa=sqrt((ax-ox)*(ax-ox)+(ay-oy)*(ay-oy));
        ab=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        theta=2*asin((ab)/(2*oa))*180/pi;
        rad=theta*pi/180;
        abc=oa*rad;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<abc<<endl;
    }
}
