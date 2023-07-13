#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=100000;
int t,i,j,cs=0,n,a,b;
string s;

int main()
{
    w(t){
        cin>>n;
        int ar[n+1];
        ar[0]=0;
        for(i=1;i<=n;i++)
            cin>>ar[i];
            int cnt=0,ind=0,nxt=0,x;
        for(i=2;i<=n/2;i++){
                nxt=i,x=1;
            for(j=i+i;j<=n; ){

                if(ar[j]>ar[nxt]){
                    j+=j;
                    nxt=j;
                    x++;
                    cout<<j<<endl;
                }
                else{
                    j+=2*j;
                }

            }
            if(x>cnt){
                cnt=x;
                ind=i;
            }
        }
        //if(cnt==0)  cnt++;
        if(ar[ind]>ar[1]) cnt++;
        if(n==1) cnt++;
        cout<<cnt<<"\n";
    }
}


