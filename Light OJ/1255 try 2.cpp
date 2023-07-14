#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
using namespace std;
typedef long long ll;
typedef pair<long long,long long> pll;
const pll M=mp(1e9+7,1e9+9);
 const int base = 347;
 const int N=1e6+6;
pll power[N+2];

pll operator+(pll a,ll x) {return mp(a.ff+x,a.ss+x);}
pll operator-(pll a,ll x) {return mp(a.ff-x,a.ss-x);}
pll operator*(pll a,ll x) {return mp(a.ff*x,a.ss*x);}
pll operator+(pll a,pll x) {return mp(a.ff+x.ff,a.ss+x.ss);}
pll operator-(pll a,pll x) {return mp(a.ff-x.ff,a.ss-x.ss);}
pll operator*(pll a,pll x) {return mp(a.ff*x.ff,a.ss*x.ss);}
pll operator%(pll a,pll x) {return mp(a.ff%x.ff,a.ss%x.ss);}



void premod(){
    int i;
    power[0]=mp (1,1);
    for(i=1;i<N;i++)
        power[i]=(power[i-1]*base)%M;
}

pll Hash(string s){
    int i;
    pll ans=mp(0,0);
    for(i=0;i<s.size();i++){
        ans=(ans*base+s[i])%M;

    }

    return ans;
}

vector<pll> hashlist(string s){
    int i,n=s.size();
    vector<pll> ans(n+1);
    ans[0]=mp(0,0);
    for(i=1;i<=n;i++){
        ans[i]=(ans[i-1]*base+s[i-1])%M;
       // cout<<ans[i].ff<<" "<<ans[i].ss<<endl;
    }
    return ans;
}

pll hashltor(const vector<pll> &hlist, int l,int r){
    int n=r-l+1;
    pll ans= (((hlist[r]-hlist[l-1]*power[n])%M)+M)%M;

    return ans;
}

int main()
{
     premod();
    int t,cs=0;
    scanf("%d",&t);
    getchar();
    while(t--){
        string a,b;
        char buffer[N];
        scanf("%s",buffer); a=buffer;
        scanf("%s",buffer); b=buffer;

        int i, na=a.size(),nb=b.size(),cnt=0;
        pll hashofb=Hash(b);
        vector<pll> ha=hashlist(a);
        //cout<<hashofb.ff<<" "<<hashofb.ss<<endl;
        for(i=1;i<=na-nb+1;i++){
             if(hashltor(ha,i,i+nb-1)==hashofb) cnt++;
        }


        printf("Case %d: %d\n",++cs,cnt);

    }
}
