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
typedef vector<ll> vll;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    cin>>n;
    vll v(n),d(n),p(n),ans;
    for(i=0;i<n;i++){
        cin>>v[i]>>d[i]>>p[i];
    }
    bool mark[n]={};

    for(i=0;i<n;i++){
        if(!mark[i]){
            ans.pb(i+1);
            a=v[i]; j=i+1;
            while(j<n && a>=0){
                if(!mark[j]){
                    p[j]-=a;
                    a--;
                }
                j++;
            }

            for(j=i+1;j<n;j++){
                if(p[j]<0 && !mark[j]){
                    for(int k=j+1;k<n;k++){
                        if(!mark[k])
                            p[k]-=d[j];
                    }
                    mark[j]=true;
                }
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
        cout<<it<<" ";
    cout<<endl;
}

