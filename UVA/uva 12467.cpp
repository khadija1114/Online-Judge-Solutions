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
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=100000;
int t,i,j,cs=0,n,a,b;
string s;

int zalgo(string s){
    int n=s.size(),r=0,l=0,k=0,len=0;
    vi z(n);
    for(i=0;i<n;i++){
        if(i>r){
            r=i,l=i;
            while(r<n &&  s[r]==s[r-l])
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
                while(r<n &&  s[r]==s[r-l])
                    r++;
                z[i]=r-l;
                r--;
            }
        }
        //cout<<z[i]<<" ";

    }
    for(i=n/2;i<n;i++)
        if(len<z[i])
            len=z[i];
    return len;
}
int main()
{
    w(t){
        getline(cin,s);
        string add=s;
        reverse(add.begin(),add.end());
        s+='$'+add;
        a=zalgo(s);
        s=s.substr(0,a);
        reverse(s.begin(),s.end());
        cout<<s<<"\n";
    }
}

