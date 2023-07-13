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
const int N=200002;
int t,i,j,cs=0,n,a,b;
string s;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;

    }
    sort(v.begin(),v.end(),cmp);

    for(auto it : v)
    cout<<it.a<<" "<<it.clr<<endl;
    for(i=1;i<n;i++){

        if(v[i].a<v[i-1].a)
        {
            cout<<"NO"<<endl;
        }
    }
    cout<<"YES"<<endl;
}
/*
6
1 2
-1 3
-2 3
-3 3
-2 2
0 1

