#include<bits/stdc++.h>
#define w(x) scanf("%d",&x);while(x--)
#define endl "\n"
using namespace std;
int t,j,cs=0,n,a,b,i;
int main()
{
    w(t){
        long long n;
        cin>>n;
        if(n<31) cout<<"NO"<<endl;
        else if(n==36)  cout<<"YES"<<endl<<6<<" "<<10<<" "<<15<<" "<<5<<endl;
        else if(n==40)  cout<<"YES"<<endl<<6<<" "<<14<<" "<<15<<" "<<5<<endl;
        else if(n==44)  cout<<"YES"<<endl<<6<<" "<<10<<" "<<7<<" "<<21<<endl;
        else cout<<"YES"<<endl<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
    }
}
