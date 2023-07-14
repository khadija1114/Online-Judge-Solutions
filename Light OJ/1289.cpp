#include<bits/stdc++.h>
#define mod 1e9+9
#define make_pair mp
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
const int N=100000002;
int t,i,j,cs=0,n;
bitset<N> bt;
int  prime[5761457],k=0;
unsigned int pre[5761457],ans;

void seive(){
    prime[k++]=2;
    for(i=3;i<10000;i+=2){
        if(!bt[i]){
            for(int j=i*i;j<N;j+= (2*i)){
                bt[j]=1; //cout<<i<<endl;
            }
        }
    }
    for(i=3;i<N;i+=2){
        if(!bt[i]){
            prime[k++]=i;

        }
    }
}
int  bit(int a,int b){
    return (log10(b)/log10(a))+0.01;
}


unsigned int remaining(int x){
    int y=sqrt(x);
    unsigned int ans=1,m;
    for(i=0;prime[i]<=y;i++){
      //  j=(log(x)/log(prime[i]))-1;
       //  cout<<j<<endl;
        m=x/prime[i];
        while(m>=prime[i]){
                m/=prime[i];
            ans*=prime[i];
        }
    }
    return ans;
}


int main()
{
   // ios
    seive();
    //cout<<prime.size();
    pre[0]=2;
   // int sz=prime.size();
  //  cout<<sz;
    for(i=1;i<k;i++)
        pre[i]=pre[i-1]*prime[i];
    int n;
    w(t){
        scanf("%d",&n);
     //   cout<<bit(3,n);
        int x=upper_bound(prime,prime+k,n)-prime-1;
        ans=pre[x];
      //  printf("Case %d: %u\n",++cs,ans);
        ans*=remaining(n);
        printf("Case %d: %u\n",++cs,ans);
    }

}


