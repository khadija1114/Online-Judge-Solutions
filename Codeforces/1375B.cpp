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

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,m,a,b,i;
string s;

int main()
{
    w(t){
        cin>>n>>m;
        int ar[n][m];
        bool ans=true;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>ar[i][j];
            }
        }

        for(i=0;i<n && ans;i++){
            for(j=0;j<m;j++){
                if(ar[i][j]){
                    if(ar[i][j]>4) ans=false;
                    if(ar[i][j]==4){
                        if(i==0 || i==n-1 || j==0 || j==m-1)
                            ans=false;
                    }
                    if(ar[i][j]==3){
                        if(i==0 && j==0)
                            ans=false;
                        else if(i==n-1 && j==m-1) ans=false;
                        else if(i==0 && j==m-1) ans=false;
                        else if(i==n-1 && j==0) ans=false;
                    }
                }
            }
        }
        if(ans==false) cout<<"NO"<<endl;
        else{
            for(i=1;i<n-1;i++){
                for(j=1;j<m-1;j++)
                    ar[i][j]=4;
            }
            for(i=0,j=1;j<m;j++){
                ar[i][j]=3;
            }
            for(i=n-1,j=1;j<m;j++)
                ar[i][j]=3;
            for(i=1,j=0;i<n;i++)
                ar[i][j]=3;
            for(i=0,j=m-1;i<n;i++)
                ar[i][j]=3;
            ar[0][0]=2;
            ar[0][m-1]=2;
            ar[n-1][0]=2;
            ar[n-1][m-1]=2;

            cout<<"YES"<<endl;
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    cout<<ar[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}

