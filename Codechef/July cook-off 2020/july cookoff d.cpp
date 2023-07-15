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
int t,j,cs=0,n,a,b,i,mark[N];
string s;
void sieve(){
    for(i=2;i<N;i+=2) mark[i]=1;
    for(i=3;i<N;i+=2){
        if(!mark[i]){
            for(j=3*i;j<N;j+=2*i)
                mark[j]=1;
        }
    }

}

int main()
{
    sieve();
    for(i=1;i<100;i++){
        if(mark[i]==0) cout<<i<<endl;
    }
    w(t){
        cin>>n;

    }
}


