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


int longest_pre_suf(string s){
    int n=s.size(),index=0;
    vi lps(n);
    for(i=1;i<n; ){
        if(s[i]==s[index]){
            index++;
            lps[i]=index;
            i++;
        }
        else{
            if(index!=0)
                index=lps[index-1];
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps[n-1];
}
int main()
{
    string s,s1,s2,add;
    w(t){
        cin>>n>>k;
        getline(cin,s);
        while(k--){
            getline(cin,s1);

            s2=s1+'$'+s;
            a=longest_pre_suf(s2);
            add=s1.substr(a,n-a);
            s+=add;
        }
        cout<<s.size()<<"\n";

    }
}

