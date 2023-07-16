#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;

pll M=mp(1e9+7,1e9+9);
pll power[1000000];
int base =347;

pll operator+(pll a, ll x) { return mp(a.ff+x,a.ss+x);}
pll operator+(pll a, pll x) { return mp(a.ff+x.ff,a.ss+x.ss);}
pll operator-(pll a, ll x) { return mp(a.ff-x,a.ss-x);}
pll operator-(pll a, pll x) { return mp(a.ff-x.ff,a.ss-x.ss);}
pll operator*(pll a, ll x) { return mp(a.ff*x,a.ss*x);}
pll operator*(pll a, pll x) { return mp(a.ff*x.ff,a.ss*x.ss);}
pll operator%(pll a, pll x) { return mp(a.ff%x.ff,a.ss%x.ss);}


void prepower()
{
    int i;
    power[0]=mp(1,1);
    for(i=1;i<1000000;i++){
        power[i]=(power[i-1]*base)%M;
    }
}

pll Hash(string s){
    int i;
    int n=s.size();
    pll ans=mp(0,0);
    for(i=0;i<n;i++)
        ans= (ans *base + s[i])%M;
    return ans;
}

vector<pll> hashlist(string s){
    int i,n=s.size();
    vector<pll> ans(n+1);
    ans[0]=mp(0,0);
    for(i=1;i<=n;i++){
        ans[i]= (ans[i-1] * base + s[i-1]) %M;
    }
    return ans;
}

pll hashltor( const vector<pll> &hashlist, int l,int r){
    int len=r-l+1;
    return (((hashlist[r]-hashlist[l-1]*power[len])%M)+M)%M;
}


int main()
{
    prepower();
    int n,i;
    string a,b;
    while(cin>>n){
        cin.ignore();
        getline(cin,b);
        getline(cin,a);
       int  nb=n;
       int  na=a.size();

        pll hb=Hash(b);
        //cout<<hb.ff<<endl;

        vector<pll> hasha=hashlist(a);
        for(i=1;i+nb-1<=na;i++){
            if(hashltor(hasha,i,i+nb-1)==hb) cout<<i-1<<endl;
        }
        cout<<endl;

    }
}

