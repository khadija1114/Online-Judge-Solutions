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

long long  mod=1e9+9;
const int N=1e6+2;
int t,j,cs=0,n,a,b,k,i;
string s;
int prime[N],cnt[N];
bool mark[N],check[N];
void seive(){
    int i,j;
    for(i=4;i<N;i+=2)
        mark[i]=1;

    for(i=3;i<N;i+=2){
        if(!mark[i]){
            for(j=i;j<N;j+=(2*i))
                mark[j]=1;
            mark[i]=0;
        }
    }
}
int main()
{
//    seive();
    cin>>n;
//    for()
    int mx=0;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
        cnt[ar[i]]++;
        mx=max(mx,ar[i]);
        if(cnt[ar[i]]==1){
            //mark[ar[i]]=1;
            prime[k++]=ar[i];
        }
    }
    sort(prime,prime+k);
    for(i=0;i<k;i++){
        a=prime[i];
            for(j=2*a;j<=mx;j+=a){
                check[j]=1;
            }
    }
    vector<int>v;
    for(i=0;i<n;i++){
        if(cnt[ar[i]]==1 && check[ar[i]]==0)
            v.pb(ar[i]);
    }
    cout<<v.size()<<endl;

}

