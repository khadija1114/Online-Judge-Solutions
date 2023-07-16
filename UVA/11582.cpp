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
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    int fibo[100];
    fibo[0]=0;
    fibo[1]=1;
    for(i=2;i<=50;i++)
        fibo[i]=fibo[i-1]+fibo[i-2];

    w(t){
        cin>>n;
        for(i=1;i<=50;i++)
            cout<<i<<" "<<fibo[i]%n<<endl;
    }
}
