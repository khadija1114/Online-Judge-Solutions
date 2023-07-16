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

void kmp(string s){
    int len=s.size(),index=0,lps[len]={};
    for(i=1;i<len;){
        if(s[i]==s[index]){
            index++;
            lps[i]=index;
            i++;
        }
        else {
            if(index!=0){
                index=lps[index-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    if(lps[2*n]==n){
        cout<<0<<"\n";
        return;
    }
    for(i=n;i<len;i++){
        if(lps[i]==n){
           cout<<len-i-1<<"\n";
           return ;
        }
    }
    cout<<-1<<"\n";
    return ;
}

int main()
{
    string s,s1,s2;
    cin>>n>>s1>>s2;
    s=s2+'$'+s1+s1;
    kmp(s);
}

