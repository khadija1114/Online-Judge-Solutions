#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=100000;
int t,i,j,cs=0,n,a,b;
string s;

int largest_suf_pre(string s){
    int index=0,n=s.size();
    vi lps(n);
    for(i=1;i<n; ){
        if(s[i]==s[index]){
            index++;
            lps[i]=index;
            i++;
        }
        else{
            if(index!=0){
                index=lps[index-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }

    }
    return n-lps[n-1];
}
int main()
{
    w(t){
        cin>>s;
        int ans=largest_suf_pre(s);
        if(s.size()%ans==0)
            cout<<ans<<"\n";
        else
            cout<<s.size()<<"\n";
        if(t) cout<<"\n";
    }
}
