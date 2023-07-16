#include<bits/stdc++.h>
#define w(x) scanf("%d",&x);while(x--)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int t,i,j,cs=0,n,a,b;
string s;

vi zalgo(string s){
    int n=s.size();
    int k=0,r=0,l=0;
    vi z(n);
    reverse(s.begin(),s.end());
    for(i=1;i<n;i++){
        if(i>r){
            l=i,r=i;
            while(r<n && s[r]==s[r-l])
                r++;
            z[i]=r-l;
            r--;
        }
        else{
            k=i-l;
            if(z[k]+i-1<r){
                z[i]=z[k];
            }
            else{
                l=i;
                while(r<n && s[r]==s[r-l])
                    r++;
                z[i]=r-l;
                r--;
            }
        }
    }
    z[0]=n;
    return z;
}
int main()
{
    ios
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s>>n;
        vi v=zalgo(s);
        reverse(v.begin(),v.end());
        while(n--){
            cin>>a;
            cout<<v[a-1]<<"\n";
        }
    }
}

