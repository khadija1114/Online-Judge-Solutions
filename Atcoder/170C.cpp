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
const int N=1e6+2;
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    cin>>a>>n;
    int ar[n];
    bool bl[103]={};
    for(i=0;i<n;i++){
        cin>>ar[i];
        bl[ar[i]]=1;
    }
    i=a,j=a;
    while(bl[i]&&bl[j]){
        i++;j--;
    }
    if(bl[j]==false){
        cout<<j<<endl;
    }
    else
        cout<<i<<endl;
}


