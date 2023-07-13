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
const int N=200005;
int t,i,j,cs=0,n,a,b,k;
string s;

int main()
{
    w(t){
        cin>>n>>k;
        long long ar[n+2],maxx=0,x,cnt;
        map<int,int> mp;
        vector<int>ind,dif;
        for(i=1;i<=n;i++){
            cin>>ar[i];
        }
        for(i=2;i<n;i++){
            if(ar[i]>ar[i-1] && ar[i] > ar[i+1])
                ind.pb(i);
        }a=(k-1)/2;
        for(i=0;i<ind.size();i++){
            b=k-2;
            cnt=0;
            for(j=i;j<ind.size();j++){
                if(b<=ind[j]-ind[i]) break;
                cnt++;
            }
            mp[ind[i]]=cnt;
            if(cnt>maxx){
                 x=i;
                 maxx=cnt;
            }


        }
      //   for(auto it=mp.begin();it!=mp.end();it++) cout<<it->ff<<" "<<it->ss<<endl;
        int st,en;
        st=ind[x]-1;
        en=ind[x+mp[ind[x]]-1]+1;
       // cout<<st<<" "<<en<<endl;
        if(en-st+1!=k){
            while(st!=1 && en - st +1 !=k)
                st--;
            while(en!=n && en-st +1 !=k)
                en++;
        }
       // cout<<st<<" "<<en<<endl;
        cout<<mp[ind[x]]+1<<" "<<st<<endl;
    }
}


