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

string make(const string &s){
    string ch;
    ch+='@';
    int n=s.size();
    for(i=0;i<n;i++)
        ch+='$'+s.substr(i,1);
    ch+="$#";
    return ch;
}

void manachers(const string &ch){
    string s=make(ch);
    int n=s.size(),len=ch.size(),max_=0,c=0,r=0,mirror,p[n]={};
    vi suf;
    for(i=1;i<n;i++){
        mirror=2*c-i;
        if(i<r) p[i]=min(r-i,p[mirror]);

        while(s[i+p[i]+1]==s[i-p[i]-1])
            p[i]++;
        if(i+p[i]+2==n)
            suf.pb(p[i]);
        if(i+p[i]>r){
            r=i+p[i];
            c=i;
        }
    }
    for(i=0;i<n;i++){
        if(max_<p[i]){
            max_=p[i];
            c=i;
        }
    }
    sort(suf.begin(),suf.end());
    j=suf.size()-1;
    if(suf[j]==len){
        j--;
    }
    string add=ch.substr(0,len-suf[j]);
    reverse(add.begin(),add.end());
    s=ch+add;

    cout<<s<<"\n";
    return ;

}
int main()
{
    string s;
    getline(cin,s);
    manachers(s);
}

