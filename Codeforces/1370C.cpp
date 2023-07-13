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
int t,j,cs=0,n,a,b,i,prime[N],k;
string s;
bool mark[N];

void sieve(){
    prime[k++]=2;
    for(i=4;i<N;i+=2){
        mark[i]=1;
    }
    for(i=3;i<N;i+=2){
        if(mark[i]==0){
            prime[k++]=i;
            for(j=i;j<=N;j+=2*i)
                mark[j]=true;
                mark[i]=false;
        }
    }
}

int main()
{
    sieve();
    w(t){
        cin>>n;
        int cnt=0;
            if((n&(n-1))==0 && n!=2){
                cout<<"FastestFinger";
            }
            else if(n%2==0 && n!=2){
                    a=n; b=1;
                while(a%2==0)
                {
                    a/=2; b*=2;
                }
                bool isp=true;
                if(a<N ){
                    if(mark[a]==false) isp=true;
                    else isp=false;
                }
                else
                for(i=1;i<k && prime[i]*prime[i]<=a;i++){
                    if(n%prime[i]==0){
                        isp=0;
                        break;
                    }
                }
                if(isp&& b==2){
                    cout<<"FastestFinger";

                }
                else
                    cout<<"Ashishgup";
            }
            else
                cout<<"Ashishgup";
            cout<<endl;
    }
}
