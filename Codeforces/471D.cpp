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
int t,i,j,cs=0,n,w;
string s;

vi zalgo(vector<int> &s){
    int r=0,l=0,k=0,n=s.size();
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
    }
    return z;
}


int main()
{
    cin>>n>>w;
    vi a,b;
    int x,cnt=0;
    for(i=0;i<n;i++){
        cin>>x;
        a.pb(x);
    }
    for(j=0;j<w;j++){
        cin>>x;
        b.pb(x);
    }

    if(w==1){
        cout<<n<<endl;
        return 0;
    }
    vi adiff,bdiff;


    for(i=1;i<w;i++)
        adiff.pb(b[i]-b[i-1]);
    adiff.pb(1e9+2);
    for(i=1;i<n;i++)
        adiff.pb(a[i]-a[i-1]);


    vi z(adiff.size());
    z=zalgo(adiff);
   // for(auto it:z) cout<<it<<" ";
    for(i=w;i<z.size();i++){
        if(z[i]==w-1)
            cnt++;
    }
    cout<<cnt<<endl;

}


