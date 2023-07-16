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

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,prime[N],k;
bool mark[N];
string s;

void sieve(){
    prime[k++]=2;
    for(i=3;i<N;i+=2){
        if(!mark[i]){
            prime[k++]=i;
            for(j=i;j<N;j+=2*i)
                mark[j]=1;
        }
    }
}

bool is_prime(int a){
    if(a<4) return true;
    int i;
    for(i=0;prime[i]*prime[i]<=a;i++){
        if(a%prime[i]==0) return false;
    }
    return true;
}
int main()
{
    sieve();
  //  for(i=0;i<20;i++) cout<<prime[i]<<" "<<endl;
    w(t){
        scanf("%d",&n);
        if(is_prime(n)){
            printf("%d\n",n);
            continue;
        }
        else if(n%2==0){
                for(i=0;i<k && prime[i]<n;i++){
                  //  cout<<prime[i]<<" "<<n-prime[i]<<endl;
                    if(is_prime(n-prime[i])){
                       // cout<<prime[i]<<endl;
                         printf("%d %d\n",prime[i],n-prime[i]);
                         break;
                    }
                }
        }
        else{
             if(is_prime(n-2)){
                printf("2 %d\n",n-2);
                continue;
            }
            else{
                n-=3;
                printf("3 ");
                for(i=1;i<k && prime[i]<n;i++){
                    if(is_prime(n-prime[i])){
                         printf("%d %d\n",prime[i],n-prime[i]);
                         break;
                    }
                }
            }
        }
    }
}

