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
        bool bl=1;
        cin>>n>>k;
        if(n<k){
            cout<<"NO"<<endl; bl=0;
            continue;
        }
        vi v; int cnt=0;

            if(n%2==k%2){
                if(n&1){
                    while(k!=1){
                        v.pb(1);
                        n--;
                        k--;

                    }

                    v.pb(n);
                }
                else{
                     while(k!=1){
                        v.pb(1);
                        n--;
                        k--;

                    }
                    if(n%2==0){
                        cout<<"NO"<<endl;bl=0;
                        continue;
                    }
                    v.pb(n);
                }
            }
            else{
                if(n&1){
                   cout<<"NO"<<endl;bl=0;
                   continue;
                }
                else{
                    while(k!=1){
                        v.pb(2);
                        n-=2;
                        k--;
                        if(n<=0 && bl)
                        {
                             cout<<"NO"<<endl;bl=0;
                                continue;

                        }
                    }
                    v.pb(n);
                }
            }
            if(bl==1){
                    cout<<"YES"<<endl;
            for(auto it:v) cout<<it<<" ";
            cout<<endl;
            }


    }
}


