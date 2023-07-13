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
const int N=1e7+2;
int t,prime[N],i,j,cs=0,k=0,n,c,a,b;
string s;
bool mark[N];
void sieve(){
    prime[k++]=2;
    for(i=3;i<N;i+=2){
        if(!mark[i]){
            prime[k++]=i;
            for(j=i;j<N;j+=2*i){
                mark[j]=true;
            }
            mark[i]=false;
        }
    }
   // cout<<k<<endl;
}
int main()
{
    sieve();
    cin>>n;
  //  for(i=0;i<n;i++)
   //     cout<<prime[i]<<endl;
    vector<int>v(n),v1(n);
    for(i=0;i<n;i++){
        cin>>a;

        if(a%2==0){
            while(a%2==0){
                a/=2;
            }
            if(a==1)
                 v[i]=-1,v1[i]=-1;
            else
                v[i]=2,v1[i]=a;
        }
        else if(a&1){
            if(mark[a]==false)
                v[i]=-1,v1[i]=-1;
            else {
            for(j=1;prime[j]*prime[j]<=a && j<k;j++){
                if(a%prime[j]==0)
                {
                  break;
                }

            }
            while(a%prime[j]==0){
                    a/=prime[j];
            }
            if(a==1)
                 v[i]=-1,v1[i]=-1;
            else
                v[i]=a,v1[i]=prime[j];
                 //   break;
            }
        }

    }
    for(auto it:v)
        cout<<it<<" ";
        cout<<endl;
    for(auto it:v1)
        cout<<it<<" ";
    cout<<endl;
}


