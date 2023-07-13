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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    w(t){
        cin>>n;
        int cnt[26]={};
        for(i=0;i<n;i++)
        {
            cin>>s;

            for(j=0;j<s.size();j++)
                cnt[s[j]-'a']++;
        }
        bool ans=true;
        for(i=0;i<26;i++){

            if( cnt[i]%n==0) ans=true;
            else{//cout<<i<<" "<<cnt[i]<<endl;
                ans=false;
                break;
            }
        }
        if(ans) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}

