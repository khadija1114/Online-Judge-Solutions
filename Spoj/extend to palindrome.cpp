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
    for(i=1;i<n;i++){
        if(i>k){
            l=i,r=i;
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
    }
   // cout<<1<<endl;
    return z;
}
int main()
{
    ios
    while(getline(cin,s)){
        string rev=s;
        reverse(rev.begin(),rev.end());
        rev+='?'+s;
        int len=rev.size();
        vi v(len);
        v=zalgo(rev);
        int max_=-1;
        //cout<<max_;
        for(i=1;i<len;i++){
            if( v[i] && v[i]+i==len){
                max_=v[i];
                break;
            }
        }

        if(max_==s.size()){
            cout<<s<<"\n";
        }
        else{
            string st=s.substr(0,s.size()-max_);
            reverse(st.begin(),st.end());
            s+=st;
            cout<<s<<"\n";
        }
    }
}

