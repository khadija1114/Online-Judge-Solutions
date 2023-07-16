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
        cin>>a>>b;
        int ar[a+1][b+1];
        for(i=0;i<=a;i++)
            for(j=0;j<=b;j++)
                ar[i][j]=-1;
        for(i=0;i<a;i++){
            cin>>n;
            getline(cin,s);
            int tmp;
            stringstream s1(s);
            while(s1>>tmp) ar[n][tmp]=0;
        }
        bool flag=true;
        for(i=1;i<=a;i++){
            if(ar[i][1]==-1 && flag ) ar[i][1]=1;
            else if(ar[i][1]==0) flag=false;
            else ar[i][1]=0;
        }
        flag=true;
        for(i=1;i<=b;i++){
            if(ar[1][i]==-1 && flag ) ar[1][i]=1;
            else if(ar[1][i]==0) flag=false;
            else ar[1][i]=0;
        }
        for(i=2;i<=a;i++){
            for(j=2;j<=b;j++){
                if(ar[i][j]!=0) ar[i][j]=ar[i-1][j]+ar[i][j-1];
            }
        }
        cout<<ar[a][b]<<endl;
        if(t) cout<<endl;
    }
}

