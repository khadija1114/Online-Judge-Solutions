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
    int n=s.size();
    ch+='@';
    for(i=0;i<n;i++)
        ch+='$'+s.substr(i,1);
    ch+="$#";
    return ch;
}

void manachers(const string &ch){
    string s=make(ch);
    int n=s.size(),r=0,lens=ch.size(),len=0,fl=0,fr=0,c=0,mirror,p[n]={};
    for(i=1;i<n;i++){
        mirror=2*c-i;
        if(i<r) p[i]=min(r-i,p[mirror]);

        while(s[i+p[i]+1]==s[i-p[i]-1])
            p[i]++;

        if(i-p[i]-1==0 && p[i]>fl){
            fl=p[i];
        }
        if(i+p[i]+2==n && p[i]>fr)
            fr=p[i];

        if(len<p[i])
            len=p[i];
        if(i+p[i]>r){
            r=i+p[i];
            c=i;
        }
    }
    if(lens==len){
        cout<<0<<" "<<ch<<"\n";
    }
    else if(fr>=fl){
        string add=ch.substr(0,lens-fr);
        reverse(add.begin(),add.end());
        cout<<add.size()<<" "<<ch<<add<<"\n";
    }
    else{
        string add=ch.substr(fl,lens-fl);
        reverse(add.begin(),add.end());
        cout<<add.size()<<" "<<add<<ch<<"\n";
    }
    return ;
}
int main()
{
    string s;
    while(getline(cin,s)){
        manachers(s);
    }
}


