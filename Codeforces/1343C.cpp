#include<bits/stdc++.h>
#define mod 1e9+9
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=100000;
int t,i,j,cs=0,n;
string s;
int main()
{
    w(t){
        cin>>n;
        int x=0,y=0;
        long long int ar[n],suma=0,sumb=0,a=-10000000000,b=0;
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        for(i=0;i<n; ){
            if(ar[i]<0){
                while(ar[i]<0 && i<n){
                    a=max(a,ar[i]);
                    i++;
                }
                suma+=a;
                a=-10000000000;
            }
            else{
                while(ar[i]>0 &&i<n){
                    b=max(b,ar[i]);
                    i++;
                }
                sumb+=b;
               b=0;
            }
        }
        cout<<suma+sumb<<endl;
    }
}


