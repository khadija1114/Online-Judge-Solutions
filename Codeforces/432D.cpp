#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long  mod=1e9+9;
const int N=1e6+2;
int t,i,j,cs=0,n,a,b;
string s;
void prefix_function(){
    cin>>s;
    n=s.size();
    vi lsp(n),ans(n);
    int index=0;
    for(i=1;i<n; ){
        if(s[i]==s[index]){
            index++;
            lsp[i]=index;
            i++;
        }
        else{
            if(index!=0){
                index=lsp[index-1];
            }
            else{
                lsp[i]=0;
                i++;
            }
        }
    }
   for(i=0;i<n;i++){
    ans[lsp[i]]++;
   }
   for(i=n-1;i>0;i--)
    ans[lsp[i-1]]+=ans[i];
   for(i=0;i<n;i++)
    ans[i]++;

    map<int,int> map_;
    a=n;
    map_[n]=1;
    while(lsp[a-1]){
        a=lsp[a-1];
        map_[a]=ans[a];
    }

    cout<<map_.size()<<endl;
    for(auto it=map_.begin();it!=map_.end();it++)
        cout<<it->ff<<" "<<it->ss<<endl;
}
int main()
{
    prefix_function();
}

