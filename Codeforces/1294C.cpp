#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,t,i,j;
    cin>>t;
    while(t--){
        int a=1,b=1,c=1;
        cin>>n;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0){
                a=i;
                n/=i;
                break;
            }
        }
        for(i++ ;i*i<=n;i++){
            if(n%i==0){
                b=i;
                n/=i;
                break;
            }
        }
        c=n;
        if(c==a||c==b||a==1||b==1||c==1) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n"<<a<<" "<<b<<" "<<c<<"\n";
    }
}
