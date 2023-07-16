#include<bits/stdc++.h>
#include<ext/rope>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
using namespace __gnu_cxx;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=1000001;
int t,i,j,cs=0,n,a,b,q,l,r;
char s[N];

int main()
{
    crope v,rev;
    scanf("%s",s);
    n=strlen(s);
    for(i=0,j=n-1;j>=0;i++,j--){
        v.pb(s[i]);
        rev.pb(s[j]);

    }

   w(t){
        scanf("%d",&q);
        if(q==3){
            scanf("%d",&a);
            printf("%c\n",v[a]);
        }
        else{
            scanf("%d %d",&l,&r);
            crope cur1=v.substr(l,r-l+1);
            v.erase(l,r-l+1);

            l= n-1-l;
            r=n-r-1;
            crope cur2=rev.substr(r,l-r+1);
            rev.erase(r,l-r+1);

            if(q==1){
                v.insert(v.mutable_begin(),cur2);
                rev.insert(rev.mutable_end(),cur1);
            }

            else{
                v.insert(v.mutable_end(),cur2);
                rev.insert(rev.mutable_begin(),cur1);
            }
        }

   }

}

