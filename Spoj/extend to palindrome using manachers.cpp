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


string make_string(const string &ch){
    string s;
    s+='@';
    int n=ch.size();
    for(i=0;i<n;i++)
        s+='$'+ch.substr(i,1);
    s+="$#";
    return s;
}

int longest_palindromic_string(const string &ch){
    string s=make_string(ch);
    int n=s.size(),len=0,r=0,c=0,p[n]={},mirror;
    for(i=1;i<n;i++){
        mirror=2*c-i;

        if(i<r) p[i]=min(r-i,p[mirror]);

        while(s[i+p[i]+1]==s[i-p[i]-1])
            p[i]++;

          //  cout<<p[i]<<" "<<i<<endl;



        if(i+p[i]>r){
            r=i+p[i];
            c=i;
        }
        if(len <p[i] && 2*p[i]+1==r){
            len=p[i];
        }
        if(i+p[i]-1==n) break;
    }
    return len;

}
int main()
{
    while(getline(cin,s)){
        string rev=s;
        reverse(rev.begin(),rev.end());
        int len=longest_palindromic_string(rev);
        if(len==s.size()) cout<<s<<"\n";
        else {
            string add=s.substr(0,s.size()-len);
            reverse(add.begin(),add.end());
            s+=add;
            cout<<s<<"\n";
        }
    }
}

