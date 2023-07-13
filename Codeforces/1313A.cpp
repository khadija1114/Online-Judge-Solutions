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
int t,j,cs=0,n,a,b,c,i;
string s;

int main()
{
    w(t){
       int ar[3];
       cin>>ar[0]>>ar[1]>>ar[2];
       sort(ar,ar+3);
       int ans=0;

       if(ar[0]){
            ar[0]--;
            ar[1]--;
            ar[2]--;
            ans+=3;
       }
        else if(ar[1]){
            ar[1]--;
            ar[2]--;
            ans+=2;
       }
       else if(ar[2]){
            ar[2]--; ans++;
       }
       if(ar[0]){
        if(ar[0]>=2){
            ans+=3;
            ar[0]-=2; ar[1]-=2;ar[2]-=2;
        }
        else{
            ar[0]=0;
            if(ar[1]>=2){
                ans+=2;
                ar[1]-=2;
                ar[2]-=2;
            }
            else if(ar[1]){
                if(ar[2]>1){
                    ans+=2;
                    ar[1]=0;
                    ar[2]-=2;
                }
                else{
                    ans++;
                    ar[1]=0;
                    ar[2]=0;
                }

            }
        }
       }
       else{
            if(ar[1]){
                ar[1]=0;;
                ar[2]=0;
                ans++;
            }
            else{
                ar[2]=0;
            }
       }
       if(ar[0] && ar[1] && ar[2])
        ans++;
       cout<<ans<<endl;

    }
}

