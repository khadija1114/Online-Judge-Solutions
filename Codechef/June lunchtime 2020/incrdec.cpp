#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
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
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    w(t){
        cin>>n;
        int ar[n],b=0,cnt=0;
        vi v1,v2;
        bool b1[N]={},b2[N]={},ans=true;
        for(i=0;i<n;i++){
            cin>>ar[i];
            b=max(b,ar[i]);
        }

        for(i=0;i<n;i++){
          a=ar[i];
          if(a==b) cnt++;
            if(b1[a]==false){
                b1[a]=1;
                v1.pb(a);
            }
            else if(b2[a]==false){
                b2[a]=true;
                v2.pb(a);
            }
            else{
                ans=false;
            }
        }
       // cout<<cnt<<endl;
        if(ans==false || cnt>1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(auto it: v1)
            cout<<it<<" ";
        for(auto it=v2.rbegin();it!=v2.rend();it++)
            cout<<*it<<" ";
        cout<<endl;
    }
}

