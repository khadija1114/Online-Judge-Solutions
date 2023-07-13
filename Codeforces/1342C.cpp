#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;


const int N=100000;
long long int mod=1e9+9,len,l,r,pre[N];
int t,i,j,cs=0,n,a,b,q;
string s;

void build(int a, int b){
    pre[0]=0;
    for(i=1;i<=len;i++){
        pre[i]=pre[i-1];
        if((i%a)%b!=(i%b)%a)
            pre[i]++;
    }
}


ll query( ll l ){
    ll cnt=l/len;
    ll rem=l%len;
    return pre[len]*cnt+pre[rem];
}


int main()
{

    w(t){
        cin>>a>>b;
        len = a*b;
        build(a,b);
        w(q){
            cin>>l>>r;
            cout<< query(r)-query(l-1)<<" ";
        }
        cout<<"\n";
    }
}


