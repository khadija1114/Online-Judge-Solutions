#include<bits/stdc++.h>
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
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,x;
string s;

int main()
{
    cin>>n>>x;
    vector<pii> ar;
    rep(i,n-1){
        cin>>a;
        ar.pb({a,i+1});
    }
    sort(ar.bg,ar.en);
    for(i=0;i<n-2;i++){
      //  cout<<ar[i].ff<<" "<<ar[i].ss<<endl;
        a=ar[i].ff;
        if(a>=x) break;
        for(j=i+1;j<n-1;j++){
            b=ar[j].ff;
            if(a+b>=x) break;
            auto it=lower_bound(&ar[j+1],&ar[n],make_pair(x-a-b,0));
       //     cout<<a<<" "<<b<<" "<<(*it).ff<<endl;
            if(a+b+(*it).ff==x){
                cout<<ar[i].ss<<" "<<ar[j].ss<<" "<<(*it).ss<<endl;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}



