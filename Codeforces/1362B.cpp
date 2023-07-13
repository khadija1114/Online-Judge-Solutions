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
int t,i,j,cs=0,n,a,b,x;
string s;

int main()
{
    w(t)
    {
        cin>>n;
        int ar[n];
        bool br[10000]={false};
        bool flag=true;
        for(i=0;i<n;i++){
             cin>>ar[i];
             br[ar[i]]=true;
        }

        sort(ar,ar+n);
        if(n==2){
            cout<<ar[1]-ar[0]<<endl;
            continue;
        }

        if(ar[0]==0) j=2;
        else j=1;
        for( ;j<n;j++){

            a=ar[j];
            if(ar[0]==0)
                a-=ar[1];
            else
                a-=ar[0];
            flag=true;
            for(i=0;i<n;i++){
                if(br[int(a^ar[i])]){
               //     cout<<a<<" ";
                    flag=true;

                }
                else{
                    flag=false;
                    break;
                }

            }
            if(flag)
                break;
        }
        if(flag){
        for(i=0;i<n;i++){
            if(ar[i]==a && ar[0]!=0)
            {
                cout<<-1<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
        cout<<a<<endl;
        }
        else
            cout<<-1<<endl;
    }

}


