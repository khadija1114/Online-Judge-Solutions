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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    cin>>n;
    int ar[n]={};
    int br[n+1]={};
    if(n==1){
        cout<<"! 1"<<endl;
        return 0;
    }
    if(n==2){
        cout<<'?'<<" "<<1<<" "<<2<<endl;
        cout.flush();
        cin>>a;
        if(a==0)
            cout<<"! "<<2<<" "<<1<<endl;
        else
            cout<<"! "<<1<<" "<<2<<endl;
        return 0;
    }
   // for(i=0;i<2*n;i++){
    int mx=0;
    for(i=1;i<n;i++){
        cout<<'?'<<" "<<i+1<<" "<<i<<endl;
        cout.flush();
        cin>>a;
        ar[i]=max(ar[i],a);
    }
   // for(i=0;i<n;i++) cout<<ar[i]<<" ";
  //  cout<<endl;
    for(i=1;i<n;i++){
        cout<<'?'<<" "<<i<<" "<<i+1<<endl;
        cout.flush();
        cin>>a;
        ar[i-1]=max(ar[i-1],a);
    }
   for(i=0;i<n;i++) cout<<ar[i]<<" ";
  //  cout<<endl;
    vi v;
    for(i=0;i<n;i++){
        if(br[ar[i]]!=0){
            v.pb(i);
            v.pb(br[ar[i]]-1);
            break;
        }
        br[ar[i]]=i+1;
    }
  //  cout<<v[0]<<" "<<v[1]<<endl;
    for(i=0;i<n;i++){
        if(ar[i]>ar[v[0]] && ar[i]>ar[v[1]])
            break;
    }

    cout<<'?'<<" "<<i+1<<" "<<v[0]+1<<endl;
    cout.flush();
    cin>>a;
    if(a==ar[i]){
        ar[v[0]]=n;
    }
    else ar[v[1]]=n;
    cout<<"! ";
    for(i=0;i<n;i++) cout<<ar[i]<<" ";
    cout<<endl;

    return 0;
}

