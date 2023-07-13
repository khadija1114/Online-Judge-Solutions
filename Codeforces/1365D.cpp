#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
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

long long  mod=1e9+9;
const int N=1e6+2;
int t,i,j,cs=0,n,ans,b,m;
char ar[100][100],c;
bool bl[100][100];

bool fill_fun(int i,int j){
    if(i<0||i>=n||j<0||j>=m)
        return false;
    else if(ar[i][j]=='G'){
        ar[i][j]='.';
        return true;
    }
    else if(!bl[i][j])
        return false;
    if(fill_fun(i,j-1)) ans++;
    if(fill_fun(i-1,j) ) ans++;
    if(fill_fun(i,j+1) ) ans++;
    if(fill_fun(i+1,j+1)) ans++;
}
int main()
{
    w(t){
        cin>>n>>m;
        int cnt=0;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                bl[i][j]=true;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>c;
                ar[i][j]=c;
                if(c=='#')
                    bl[i][j]=false;
                else if(c=='B'){
                    bl[i][j]=false;
                    if(i>0){
                        bl[i-1][j]=false;
                    }
                    if(i<n-1){
                        bl[i+1][j]=false;
                    }
                    if(j>0){
                        bl[i][j-1]=false;
                    }
                    if(j<n-1)
                        bl[i][j+1]=false;
                }
                else if(c=='G')
                    cnt++;
            }
        }
        ans=0;
        for(i=0;i<cnt;i++)

      //  fill_fun(n-1,m-1);

        if(ans==cnt)
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }
}

