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
string s,st;

int zalgo(string st,string s){
    int r=0,len=st.size(),l=0,k=0,cnt=0;
    st=st+"?"+s;
    n=st.size();
    vi z(n);
    for(i=1;i<n;i++){
        if(i>r){
            r=i,l=i;
            while(r<n && st[r]==st[r-l])
                r++;
            z[i]=r-l;
            r--;
        }
        else {
            k=i-l;
            if(z[k]+i-1<r)
                z[i]=z[k];
            else{
                l=i;
                while(r<n && st[r]==st[r-l])
                r++;
                z[i]=r-l;
                r--;
            }
        }
        if(z[i]>=len) cnt++;
    }
    return cnt;
}
int main()
{
    w(t){
        cin>>s>>st;
        int ans=zalgo(st,s);
        printf("Case %d: %d\n",++cs,ans);
    }
}


