#include<bits/stdc++.h>
#define mod 1e9+9
#define make_pair mp
#define push_back pb
#define w(x) cin>>x;while(x--)
typedef long long ll;
using namespace std;

int main()
{
    int t,i,j,cs=0,n;
    w(t){
        int x,n,m;
        cin>>x>>n>>m;
        if(x>10 && x>10*m)
        while(n--){
            x=x/2 +10;
           // cout<<x<<" ";
        }
        x= x - 10*m;
        if(x<=0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }


}


