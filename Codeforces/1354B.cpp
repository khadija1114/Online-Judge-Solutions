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
int t,i,j,cs=0,n,a,b,c;
string s;

int main()
{
    w(t){
        cin>>s;
        n=s.size();
        int pos1,pos2=0,pos3=0;
        int ans=2000006;
        a=s[0]-'0';
        if(a==1){
            b=2;c=3;
        }
        else if(a==2){
            b=1;c=3;
        }
        else {
                b=1;c=2;
        }
        pos1=0;
        for(i=1;i<n;i++){
            if(s[i]-'0'==a){
                pos1=i;
            }
            else if(s[i]-'0'==b){
                pos2=i;
            }
            else{
                pos3=i;
            }
            if(pos2!=0 && pos3!=0){
                int add=max(pos1,max(pos2,pos3));
                int add2=min(pos1,min(pos2,pos3));
                ans=min(ans,add-add2+1);

            }
        }
        if(ans==2000006) cout<<0<<"\n";
        else
        cout<<ans<<"\n";
    }
}


