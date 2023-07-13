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
int t,i,j,cs=0,n,a,b,k;
string s;

int main()
{
    w(t){
        cin>>n>>k>>s;
        sort(s.begin(),s.end());
        if(s[0]!=s[k-1]){
            cout<<s[k-1]<<endl;
            continue;
        }
        cout<<s[0];
        if(s[k]==s[n-1]){
            a=(n-k)/k;
            if(a*k<n-k) a++;
            for(i=0;i<a;i++)
                cout<<s[k];
            cout<<endl;
        }
        else{
            for(i=k;i<n;i++)
                cout<<s[i];
            cout<<endl;
        }
    }
}


