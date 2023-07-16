#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef pair<ll,ll> pll;

const pll mod=mp(1e9+7,1e9+9);
const ll base=347;
const ll N=1e6+7;

pll operator+ (pll a , ll x) {return mp(a.ff+x,a.ss+x);}
pll operator- (pll a , ll x) {return mp(a.ff-x,a.ss-x);}
pll operator* (pll a , ll x) {return mp(a.ff*x,a.ss*x);}
pll operator+ (pll a , pll x) {return mp(a.ff+x.ff,a.ss+x.ss);}
pll operator- (pll a , pll x) {return mp(a.ff-x.ff,a.ss-x.ss);}
pll operator* (pll a , pll x) {return mp(a.ff*x.ff,a.ss*x.ss);}
pll operator% (pll a , pll x) {return mp(a.ff%x.ff,a.ss%x.ss);}

pll pow[N+1];
void power(){
    pow[0]=mp(1,1);
    for(i=1;i<N;i++){
        pow[i]=(pow[i-1]*base)%mod;
    }
}

