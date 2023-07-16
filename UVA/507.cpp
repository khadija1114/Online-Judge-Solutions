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
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    w(t){
        cin>>n;
        int ar[n]={};
        for(i=1;i<n;i++) cin>>ar[i];
        int nend=0,nstrt=0,bend=0,bstrt=0,nsum=0,bsum=0;
        for(nend=1;nend<n;nend++){
            nsum+=ar[nend];
            if(nsum>bsum){
                bsum=nsum;
                bstrt=nstrt;
                bend=nend;
            }
            else if(nsum==bsum){
                if(nend-nstrt>bend-bstrt){
                    bend=nend;
                    bstrt=nstrt;
                }
            }
            if(nsum<0){
                nsum=0;
                nstrt=nend+1;
            }
        }
        if(bsum<=0)
            cout<<"Route "<<++cs<<" has no nice parts"<<endl;
        else
            cout<<"The nicest part of route "<<++cs<<" is between stops "<<bstrt<<" and "<<bend+1<<endl;
    }
}

