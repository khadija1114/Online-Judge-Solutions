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


string make(const string &ch){
    string s;
    int n=ch.size();
    s+='@';
    for(i=0;i<n;i++)
        s+='$'+ch.substr(i,1);
    s+="$#";

    return s;
}


int manachers(const string& ch){
    int r=0,l=0,c=0,mirror,len=0;
    string s = make(ch );
    int n=s.size();
    int p[n]={};
    for(i=1;i<s.size();i++){
        mirror=2*c-i;
        if(i<r) p[i]=min(r-i,p[mirror]);

        while(s[i+p[i]+1]==s[i-p[i]-1])
            p[i]++;
        if(i+p[i]+2==n) return p[i];
        if(i+p[i]>r){
            r=i+p[i];
            c=i;
        }
    }
    return 1;
}

int main()
{
    string s;
    while(getline(cin,s)){
        int n=s.size();
        string add;
        a=manachers(s);
        if(a==n){
            cout<<s<<"\n";
            continue;
        }
        add=s.substr(0,n-a);
        reverse(add.begin(),add.end());
        s+=add;
        cout<<s<<"\n";
    }
}


