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
int t,i,j,cs=0,n,a,b,c,d;
string s;

int main()
{
    int ar[4];
    for(i=0;i<4;i++)
        cin>>ar[i];
    sort(ar,ar+4);
    int d1,d2,d3,d4;
    if(ar[3]-ar[2]==ar[1]-ar[0] && ar[3]-ar[1]==ar[2]-ar[0])
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
}


