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
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
ll j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},c,d,dyy[]={0,-1,1,0},k,m,x,y;
string s;

int main()
{
    int t;
    w(t){
       cin>>n>>x>>y;

       int mx=mod,ind=0;
       k=y-x;
       for(i=k;i>0;i--){
        if(k%i!=0) continue;
        b=y/i;
        //if(x%i==0) b--;
        //c=k/i;
       // if(c>n) cp
       if(y%i!=0) b++;
       if(k/i>=n) break;
       if(b>n) a=y;
       else  a=(y+(n-b)*i);
       // cout<<i<<" "<<a<<endl;
      if(a<mx){
        mx=a;
        ind=i;
      }

       }

       for(i=0;i<n;i++){
        cout<<mx<<" ";
        mx-=ind;
       }
       cout<<endl;

    }
}
