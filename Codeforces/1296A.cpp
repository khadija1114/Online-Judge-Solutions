#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,m,t,i,dig,j,num;
   int a[100000],count=0;
   cin>>t;
   while(t--)
   {
       cin>>n;
       count=0;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
          if(a[i]%2==1) count++;
       }


       if( count==0||(n%2==0&&count==n)) cout<<"NO"<<"\n";
      else
       cout<<"YES"<<"\n";
   }
}
