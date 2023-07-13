#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    cout<<1<<endl;
    cin>>n;
    int ar[n],cnt[N]={};

    multiset<int> sqr;
    for(i=0;i<n;i++){
        cin>>ar[i];
        cnt[ar[i]]++;
    }
    for(i=0;i<N;i++){
        if(cnt[i]) sqr.insert(cnt[i]);
    }
    for(auto it:sqr) cout<<it<<endl;
    ws(t){
        cin>>s>>a;
        if(s=="+"){
            b=cnt[a];
            auto it=*sqr.find(b);
            sqr.erase(it);
            sqr.insert(b+1);
            cnt[a]++;
        }
        else{
            b=cnt[a];
            auto it=*sqr.find(b);
            sqr.erase(it);
            sqr.insert(b-1);
            cnt[a]--;
        }
        int x=0,y=0,z=0,j=0;
        for(auto it=sqr.rbegin();it!=sqr.rend();it++,j++)
        {
            if(j==0) x=*it;
            else if(j==1) y=*it;
            else if(j==2) z=*it;
            else break;
        }
        if(x>=8 || ( x>=4 && y>=2 && z>=2)||(x>=4 && y>=4)){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

