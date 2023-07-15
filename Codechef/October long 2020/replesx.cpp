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
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,x,p,ans;
string s;

int main()
{
    w(t){
        cin>>n>>x>>p>>k;
        int ar[n];
        p--;k--;
        rep(i,n-1) cin>>ar[i];
        sort(ar,ar+n);
        if(ar[p]==x){
            cout<<0<<endl;
            continue;
        }
        int pos; bool is=false;
        for(i=0;i<n;i++) if(ar[i]==x && i!=k) is=true;
        if(!is){
             ar[k]=x,ans=1;
        }
        else ans=0;
        sort(ar,ar+n);
        if(k==p){
            if(ar[p]>x){
                rep(i,n-1){
                if(ar[i]<=x){
                    pos=i;
                    }
                }
                ans+=p-pos;
                cout<<ans<<endl;
            }
            else{
                rep(i,n-1){
                if(ar[i]==x){
                    pos=i;
                    break;
                    }
                }
                ans+=pos-p;
                cout<<ans<<endl;
            }
        }
        else if(k>p){
            rep(i,n-1){
                if(ar[i]<=x){
                    pos=i;
                }
            }
            if(ar[p]<x){
                cout<<-1<<endl;
            }
            else{
                ans+=p-pos;
                cout<<ans<<endl;
            }
        }
        else{
            rep(i,n-1){
                if(ar[i]==x){
                    pos=i;
                    break;
                }
            }
            if(ar[p]>x){
                cout<<-1<<endl;
            }
            else{
                ans+=pos-p;
                cout<<ans<<endl;
            }
        }

    }
}



