#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,ax,ay,bx,by,cx,cy,dx,dy,l,h,a;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        h=cy-by;
        l=ax-bx;
        dx=l+cx;
        dy=h+ay;
        a=(ax*(by-cy)+bx*(cy-ay)+cx*(ay-by));
        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<abs(a)<<endl;

    }
}
