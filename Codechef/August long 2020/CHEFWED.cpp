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

const int N=1e5+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,k;
string s;

int main()
{
    w(t){
        cin>>n>>k;
        int ar[n],cnt=0,ans=mod,freq[101]={},j=1,par[N]={},loc[n]={};;
        rep(i,n-1){
            cin>>ar[i];
            freq[ar[i]]++;
        }
        j=1;
        for(i=0;i<n;i++){

            if(par[ar[i]]==j){
                j++;
            }
            par[ar[i]]=j;
            loc[i]=j;
        }
//        for(i=0;i<n;i++){
//            cout<<loc[i]<<" ";
//        }
//        cout<<endl;
        if(k==1){
            cout<<j<<endl;
            continue;
        }
        a=j;
        i=0;
        ans=j*k;
        cnt=mod;
        while(i<a){
            cnt=0;
            int freq[101]={};
            for(j=0;j<n;j++){
                if(loc[j]>i){
                    freq[ar[i]]++;
                }
            }

            for(j=1;j<=100;j++)
                if(freq[j]>1){
                    cnt+=freq[j];
                }
            ans=min(ans,(i+1)*k+cnt);
            cout<<i<<" "<<cnt<<" "<<(i+1)*k+cnt<<endl;
            i++;
        }
        //ans=k*i+cnt;
        cout<<ans<<endl;
    }
}


