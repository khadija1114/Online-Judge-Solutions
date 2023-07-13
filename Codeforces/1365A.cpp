#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long  mod=1e9+9;
const int N=1e6+2;
int t,i,j,cs=0,n,a,b;
string s;

int main()
{
    w(t){
        cin>>a>>b;
        set<int> u,v;
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                cin>>n;
                if(n){
                    u.insert(i);
                    v.insert(j);
                }
            }
        }
        n=min(a-u.size(),b-v.size());
        if(n&1)
            cout<<"Ashish"<<endl;
        else
            cout<<"Vivek"<<endl;
    }
}

