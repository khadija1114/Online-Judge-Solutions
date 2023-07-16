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
    w(t){
        scanf("%d%d",&n,&m);
        int ar[n][m],br[n][m]={};
        rep(i,n-1){
            rep(j,m-1){
                scanf("%d%d",&ar[i][j]);
            }
        }
        for(i=1;i<n-1;i++){
            for(j=1;j<m-1;j++){
                br[i][j]=max(ar[i][j],ar[i-1][j]);
                br[i][j]=max(br[i][j],ar[i+1][j]);
                br[i][j]=max(br[i][j],ar[i][j-1]);
                br[i][j]=max(br[i][j],ar[i][j+1]);
            }
        }

    }
}

