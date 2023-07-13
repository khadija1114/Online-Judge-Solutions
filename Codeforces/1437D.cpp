#include<bits/stdc++.h>
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
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    w(t){
        cin>>n;
        int ar[n],h[n]={};
        rep(i,n-1) cin>>ar[i];
        for(i=1,j=0;i<n;i++){
            if(ar[i]<ar[i-1]){
                j++;
            }
            h[i]=h[j]+1;
        }
//        for(i=0;i<n;i++){
//            cout<<h[i]<<" ";
//        }
//        cout<<endl;
        cout<<h[n-1]<<endl;
    }
}



