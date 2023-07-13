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
string s,ch;

int main()
{
    cin>>n>>s;

    int ar[26]={},cnt=0;
    for(i=0;i<n;i++)
    {
        ar[s[i]-'a']++;
    }
    for(i=25;i>=0;i--){
        if(ar[i]){
            for(j=0;j<n;j++){
                if(s[j]-'a'==i){

                    if(j>0 && s[j]-s[j-1]==1){
                        cnt++;
                        n--;
                        ar[i]--;
                        i++;
                        ch=s.substr(0,j)+s.substr(j+1,n-j);
                        s=ch;
                       // cout<<s<<" ";
                        break;
                    }
                    else if(j<n-1 && s[j]-s[j+1]==1){
                        cnt++;
                        ar[i]--;
                        n--;
                        i++;
                        ch=s.substr(0,j)+s.substr(j+1,n-j);
                        s=ch;
                       // cout<<s<<" ";
                        break;
                    }
                }
            }
        }
    }

    cout<<cnt<<"\n";

}
