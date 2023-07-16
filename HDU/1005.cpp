#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=100000;
int t,i,j,cs=0,n,a,b;
string s;

int main()
{
    while(cin>>a>>b>>n && a+b+n!=0){
        a=a%7,b=b%7;
        int cnt,f[100] = {0,1,1};
        f[3]=(a*f[2]+b*f[1])%7;
        f[4]=(a*f[3]+b*f[2])%7;
        for(i=5; ;i++){
            f[i]=(a*f[i-1]+b*f[i-2])%7;
            if(f[i-1]==f[3] && f[i]==f[4]){
                cnt=i-4;
                break;
            }
        }
        if(n>2)
            printf("%d\n",f[n%cnt]);
        else
            printf("1\n");
    }

}


