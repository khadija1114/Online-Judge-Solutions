#include<bits/stdc++.h>
#define mod 1e9+9
#define make_pair mp
#define push_back pb
#define w(x) cin>>x;while(x--)
typedef long long ll;
using namespace std;
int largest_suf_pre(string s){
    int index=0,i;
    string a=s+'?';
    reverse(s.begin(),s.end());
    a+=s;
    int n=a.size();
    vector<int> lps(n);
    for(i=1;i<n; ){
        if(a[i]==a[index]){
            index++;
            lps[i]=index;
            i++;
        }
        else{
            if(index!=0){
                index=lps[index-1];
            }
            else{
                i++;
            }
        }
    }
    return lps[n-1];
}

int main()
{
    int t,i,j,cs=0,n,l;
    w(t){
        cin.ignore();
        int l=0;
        string s,ans,rem;
        cin>>s;
        n=s.size();
        for(i=0,j=n-1;i<j;i++,j--){
            if(s[i]==s[j]) l++;
            else break;
        }
        rem=s.substr(l,n-2*l);
        ans=s.substr(0,l);
        if(rem.size()!=0){
            int l1 = largest_suf_pre(rem);
            reverse(rem.begin(),rem.end());
            int l2 = largest_suf_pre(rem);
            if(l2>l1){
                ans+=rem.substr(0,l2);
            }
            else{
                 reverse(rem.begin(),rem.end());
                 ans+=rem.substr(0,l1);
            }
        }
        ans+=s.substr(n-l,n);
        cout<<ans<<endl;
    }


}
