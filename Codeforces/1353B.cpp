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
int t,i,j,cs=0,n,a,b,k;
string s;

int main()
{
    w(t){
        cin>>n>>k;
        long long sum=0;
        int  st[n],st1[n];
        for(i=0;i<n;i++){
            cin>>st[i];
            sum+=st[i];
        }
        for(i=0;i<n;i++){
            cin>>st1[i];
        }
        sort(st,st+n);
        sort(st1,st1+n);

        for(i=0,j=n-1;i>=0 && k;i++,j--){
            if(st[i]<st1[j]){
                k--;
                sum+=st1[j]-st[i];

            }
            else{
                break;
            }

        }
        cout<<sum<<endl;
    }
}


