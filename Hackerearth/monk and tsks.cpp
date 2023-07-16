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

long long  mod=1e9+9,a;
const int N=1e6+2;
int t,i,j,cs=0,n,b;
string s;
struct obj{
    int cnt;
    long long num;
};
bool operator< (obj a ,obj b ){
    if(a.cnt<b.cnt)
        return true;
    if(a.num<b.num)
        return true;

    return false;
}

int main()
{
    w(t){
        scanf("%d",&n);
        vector<obj> v(n);
        for(i=0;i<n;i++){
             scanf("%lld",&a);
            v[i].cnt=__builtin_popcount(a);
            v[i].num=a;
        }
        sort(v.begin(),v.end());

        for(i=0;i<n;i++)
            printf("%lld ",v[i].num);
        printf("\n");
    }
}
