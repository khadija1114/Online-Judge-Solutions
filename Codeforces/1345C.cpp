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

int main()
{
    w(t){
        set<int>st;
        cin>>n;
        int ar[n],j=0;
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        j=1;
        for(i=1;i<=n;i++){
            st.insert(i+ar[j]);
            //cout<<i+ar[j]<<" ";
            j++;
            if(j==n) j=0;
        }
      //  cout<<endl;
       // for(auto it:st) cout<<it<<" ";
        if(st.size()==n) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }

}


