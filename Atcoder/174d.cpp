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
int t,j,cs=0,n,b,i,a;
string s;

int main()
{
    ios
        scanf("%d",&n);
        int a=0,cnt=0;
        while(a<n){
            a=10*a+7;
            cnt++;
        }

        if(n%2==0 || n%5==0) {
           printf("-1\n");
            return 0;
        }
        while(a%n!=0){
            a=a%n;
            a=a*10+7;
            cnt++;

           // cout<<a<<endl;
        }
        printf("%d\n",cnt);

}

