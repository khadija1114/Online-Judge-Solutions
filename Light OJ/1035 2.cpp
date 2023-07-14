#include<bits/stdc++.h>
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
long long int mod=1e9+9;
const int N=100000;
int t,i,j,cs=0,n,a,b,prime[]={2,3,5,7};
map<int,int> m[101];
vi fact[101];

void factor(){
    for(i=2;i<101;i++){
        t=i;
        for(j=0;j<4;j++){
                while(t%prime[j]==0){
                    t/=prime[j];
                    fact[i].pb(prime[j]);
                }
        }
        if(t>1) fact[i].pb(t);

    }

}
void map__(){
    m[2][2]++;
    for(i=3;i<101;i++){
        m[i]=m[i-1];
        for(j=0;j<fact[i].size();j++){
            m[i][fact[i][j]]++;
        }
    }
}
int main()
{
    factor();
    map__();
//    w(t){
//        cin>>n;
//        for(auto it=fact[n].begin();it!=fact[n].end();it++) cout<<*it<<" ";
//    }
    w(t){
        scanf("%d",&n);
        for(auto it=m[n].begin();it!=m[n].end();it++){
            if(it==m[n].begin())
                printf("Case %d: %d = %d (%d)",++cs,n,it->ff,it->ss);
            else  printf(" * %d (%d)",it->ff,it->ss);
        }
        printf("\n");
    }
}


