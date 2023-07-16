#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int main()
{
    double a,b,A,v,s,l,lx,ly;
   // cout<<pi<<endl;
    while(scanf("%lf%lf%lf%lf%lf",&a,&b,&v,&A,&s)!=EOF){
        if(a+b+A+v+s==0) break;
        l=s*v/2;
        lx=l*cos(A*pi/180);
        ly=l*sin(A*pi/180);
       // cout<<lx<<" "<<ly<<endl;
        cout<<round(lx/a)<<" "<<round(ly/b)<<endl;
    }
}
