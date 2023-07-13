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
int t,i,j,cs=0,n,a;
string s;

int main()
{
    cin>>n;
    bool b[n]={};
    int  cnt1=0,cnt2=0;
    for(i=0;i<n;i++){
        cin>>a;
        if(a){
            b[i]=1;
            cnt1++;
        }

    }
     for(i=0;i<n;i++){
        cin>>a;
        if(a){
            if(b[i])
                cnt1--;
            else
                cnt2++;
        }
    }
    if(cnt1==0){
        cout<<-1<<endl;
        return 0;
    }
   // cout<<cnt1<<" "<<cnt2<<endl;
    a=cnt2/cnt1 +1;
    cout<<a<<endl;

}


