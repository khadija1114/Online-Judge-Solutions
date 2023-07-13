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
        cin>>s;
        int bl[2]={};
        for(i=0;i<s.size();i++){
            if(s[i]=='1') bl[1]=1;
            else bl[0]=1;
        }
        if(bl[1]+bl[0]==1){
            cout<<s<<endl;
        }
        else {
            int f=s[0]-'0',se;
            if(f==0) se=1;
            else se=0;
            for(i=0;i<s.size();i++){
                cout<<f<<se;
            }
            cout<<endl;
        }
    }
}


