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
    w(t){
        cin>>n;
        if(n<4){
            cout<<-1<<"\n";
            continue;
        }
        if(n&1)
            a=n;
        else
            a=n-1;
        while(a>0){
            cout<<a<<" ";
            a-=2;
        }
        cout<<4<<" "<<2<<" ";
        a=6;
        while(a<=n){
            cout<<a<<" ";
             a+=2;
        }
        cout<<"\n";
    }
}


