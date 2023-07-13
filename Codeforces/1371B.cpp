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
int t,j,cs=0,n,a,b,k,i;
string s;

int main()
{
    w(t){
        cin>>n>>k;
        bool ar[n][n]={};
        a=sqrt(k);
        if(k<=n && k){
            for(i=0;i<n && k;i++){
                ar[i][i]=true;
                k--;
              //  if(k==0) break;
            }
            b=0;
        }
        else{
            if(a*a==k) b=0;
            else b=1+(a-(k-a*a))*(a-k+a*a);
            for(i=0;i<a;i++){
                for(j=0;j<a;j++){
                    ar[i][j]=true;
                }
            }
            k-=a*a;

            for(i=0,j=a;i<a && k;i++){
                ar[i][j]=true;
            }
            for(i=a,j=0;j<a&& k;j++){
                ar[i][j]=true;
            }
        }

        cout<<b<<endl;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<int(ar[i][j]);
            }
            cout<<endl;
        }
    }
}

