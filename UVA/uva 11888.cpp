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
string s;

string make(const string &s){
    string ch;
   int  n=s.size();
    ch+='@';
    for(i=0;i<n;i++){
        ch+='$'+s.substr(i,1);
    }
    ch+="$#";
    return ch;
}
int manachers(const string &ch){
    string s=make(ch);
    int lench=ch.size();
    int n=s.size(),r=0,c=0,mirror;
    int p[n]={};
    vi right,left;
    bool ispal=false;

    for(i=1;i<n;i++){
        mirror=2*c-i;

        if(i<r) p[i]= min(r-i,p[mirror]);

        while(s[i+p[i]+1]==s[i-p[i]-1])
            p[i]++;
        if(p[i]+i>r){
            r=i+p[i];
            c=i;
        }
    }
    for(i=0;i<n;i++){
        if(p[i] && i-p[i]-1==0){

            r=i+p[i];
            c=r+(n-r-1)/2;
            //cout<<i<<" "<<p[i]<<" "<<r<<" "<<c<<endl;
            if( p[c] && p[c]+p[i]==lench)
                return -1;
        }
    }
    int len=0;
    for(i=0;i<n;i++){
        if(p[i]>len)
            len=p[i];
    }
    if(len==lench)
        return 0;
    return 1;
}
int main()
{
    w(t){
        cin>>s;

        a=manachers(s);
        if(a==-1)
            cout<<"alindrome";
        else if(a==0)
            cout<<"palindrome";
        else
            cout<<"simple";
        cout<<"\n";
    }
}


