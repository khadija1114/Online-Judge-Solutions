#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=100000;
int t,i,j,cs=0,n,a,b;
string make_string(const string &ch){
    string s;
    int n=ch.size();
    s+='@';
    for(i=0;i<n;i++)
        s+='$'+ch.substr(i,1);
    s+="$#";
    return s;
}
pii manacher(const string &ch){
    string s=make_string(ch);
    int r=0,c=0,mirror,n=s.size(),p[n]={},cnt=0;
    for(i=1;i<n;i++){
        mirror=2*c-i;
        if(i<r) p[i]=min(r-i,p[mirror]);
        while(s[i+p[i]+1]==s[i-p[i]-1])
            p[i]++;
        if(p[i]+i+1==n)
            break;
        if(p[i]+i>r){
            r=p[i]+i;
            c=i;
        }
    }
    int len=0;
    for(i=0;i<n;i++){
        if(len<p[i]){
            c=i;
            len=p[i];
        }
    }
    for(i=0;i<n;i++)
    if(p[i]==len) cnt++;
    return mp(len,cnt);

}

int zalgo(string s,int len){
    int n=s.size(),r=0,l=0,k=0,cnt=0;
    vi z(n);
    for(i=1;i<n;i++){
        if(i>r){
            r=i,l=i;
            while(r<n && s[r]==s[r-l])
                r++;
            z[i]=r-l;
            r--;
        }
        else{
            k=i-l;
            if(z[k]+i-1<r)
                z[i]=z[k];
            else{
                l=i;
                 while(r<n && s[r]==s[r-l])
                    r++;
                z[i]=r-l;
                r--;
            }
        }
        if(z[i]==len) cnt++;
    }
    return cnt;
}
int main()
{
    string s;
    w(t){
        getline(cin,s);
        pii ans=manacher(s);
        cout<<ans.ff<<" "<<ans.ss<<"\n";
    }
}

