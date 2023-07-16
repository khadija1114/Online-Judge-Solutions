#include<bits/stdc++.h>
using namespace std;
int mod(int b,int n)
{
    int res=1;
   while(n>0)
   {
       if(n&1) res=(res*b)%1000;
       b=(b*b)%1000;
       n>>=1;
   }
   return res;

}
int main()
{
    int a,b,n,t,x;
    double m;
    cin>>t;
        while(t--){
                cin>>a>>n;
        b=a%1000;
        m=n*(log10(a));
        m=m-int(m);
        m=100*pow(10,m);

        cout<<int(m)<<"...";
        printf("%03d\n",mod(b,n));

    }
}
