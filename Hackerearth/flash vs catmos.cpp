#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long  mod=1e9+9;
const int N=1e6+2;
int t,i,j,cs=0,n,a,b;
string s;
bool cmp(int a,int b){
    if(__builtin_popcount(a)==__builtin_popcount(b))
        return a<b;
    return __builtin_popcount(a)<__builtin_popcount(b);
}
int main()
{
    w(t){
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
        }

        sort(ar,ar+n,cmp);
        for(auto it: ar)
            cout<<it<<" ";
        cout<<"\n";
    }
}
