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

const int N=1e5+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
   scanf("%d",&n);
    int cnt[N]={};

    multiset <int> sqr;
    for(i=0;i<n;i++){
       scanf("%d",&a);
        cnt[a]++;
    }
   for(i=1;i<N;i++){
        if(cnt[i]) sqr.insert(cnt[i]);
    }

    ws(t){
        //for(auto it:sqr) cout<<it<<endl;
        cin>>s>>a;
        if(s=="+"){
            b=cnt[a];
            if(b){
                auto it=sqr.find(b);
                sqr.erase(it);
            }

            sqr.insert(b+1);
            cnt[a]++;
        }
        else{
            b=cnt[a];
            auto it=sqr.find(b);
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
        if(x>=8 || ( x>=4 && y>=2 && z>=2)||(x>=4 && y>=4) ||(x>=6 && y>=2)){
          printf("YES\n");
        }
        else
           printf("NO\n");
    }
}


