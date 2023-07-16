#include<bits/stdc++.h>
using namespace std;
int i,j,t,k,n,cs,c=3;
int largest_suf_pre(string s,int len){
    int n=s.size(),i,j,index=0;
    vector<int> lps(n);
    for(i=1;i<n;){
        if(s[i]==s[index]){
            index++;
            lps[i]=index;
            if(index==len && i>len) return n-i-1;
            i++;
        }
        else {
            if(index!=0){
                index=lps[index-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return -1;
}


int main()
{
    string s,st;
    cin>>n>>s>>st;
    string ch=st+'$'+s+s;
    int ans=largest_suf_pre(ch,n);
    if(ans==n) cout<<0<<endl;
    else cout<<ans<<endl;
}
