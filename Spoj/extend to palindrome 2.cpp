#include<bits/stdc++.h>
#define w(x) scanf("%d",&x);while(x--)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int t,i,j,cs=0,n,a,b;
string s;

int largest_suf_pre(string s){
    int n=s.size()*2+1;
    string rev=s;
    reverse(rev.begin(),rev.end());
    rev+='?'+s;
    int len=rev.size();
    int lps[n]={},index=0;
    for(i=1; i<n; ){
        if(rev[i]==rev[index]){
            index++;
            lps[i]=index;
            i++;
        }
        else{
            if(index!=0)
                index=lps[index-1];
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps[n-1];
}

int main()
{
    while(getline(cin,s)){
        int max_=largest_suf_pre(s);
        //cout<<max_;
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


