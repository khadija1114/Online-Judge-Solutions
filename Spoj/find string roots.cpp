#include<bits/stdc++.h>
#define mp make_pair
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
const int N=100000;
int t,i,j,cs=0,n,a,b;
string s;

int zalgo(string s){
    int n=s.size(),r=0,l=0,k=0,ans=n;
    vi z(n);
    for(i=1;i<n;i++){
        if(i>r){
            r=i,l=i;
            while(r <n && s[r]==s[r-l])
                r++;
            z[i]=r-l;
            r--;
        }
        else{
            k=i-l;
            if(z[k]+i-1<r)
                z[i]=z[k];
            else{
                l=i;
                 while(r <n && s[r]==s[r-l])
                    r++;
                z[i]=r-l;
                r--;
            }
        }
        if(r==n-1)
        {
           // cout<<r<<endl;
            ans=n-z[i];
            break;
        }
    }
    return ans;
}
int main()
{
    while(getline(cin,s) && s!="*"){
        int ans=1;
        int get=zalgo(s);
        if(s.size()%get==0) ans=s.size()/get;
        cout<<ans<<endl;
    }
}


