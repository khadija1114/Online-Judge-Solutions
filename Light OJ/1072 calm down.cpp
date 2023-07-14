#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<stdio.h>
//#include<conio.h>

using namespace std;
int main()
{
    int i,t,y,n;
    double R,r,theta,pi;
    pi=acos(0.0)*2;
    cin>>t;
   // cout<<pi;
    for(i=1;i<=t;i++)
    {
        cin>>R;
        cin>>n;
        theta=pi/n;
        //cout<<theta;
        r=R*sin(theta)/(1+sin(theta));
       // cout<<r;
        if(ceil(r)==r)
        {
          cout<<"Case "<<i<<": "<<ceil(r)<<endl;        }
        else
        {
          cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<r<<endl;        }


    }
    return 0;
}

