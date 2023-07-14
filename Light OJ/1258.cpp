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
int t,j,cs=0,n,a,b,i;
string s;

string string_convert(const string& ch){
    int n=ch.size();
    string s;
    s+="@#";
    for(i=0;i<n;i++)
        s+=ch.substr(i,1)+'#';
    s+='$';
    return s;
}

int manachers(const string& ch){
    int n=ch.size(),l;
    string s=string_convert(ch);
    l=s.size();
    int mirror,c=0,r=0,p[l]={};
    for(i=1;i<l;i++){
        mirror=2*c-i;
        if(i<r) p[i]=min(r-i,p[mirror]);
        while(s[i+p[i]+1]==s[i-p[i]-1])
            p[i]++;
        if(i+p[i]+2==l) break;
        if(i+p[i]>r){
            r=i+p[i];
            c=i;
        }
    }
//    for(auto it:s) cout<<it<<" ";
//    cout<<endl;
//    for(auto it:p) cout<<it<<" ";
//    cout<<endl;
    return 2*n-p[i];
}
int main()
{
    string s;
    ws(t){
        cin>>s;
        printf("Case %d: %d\n",++cs,manachers(s));
    }
}


