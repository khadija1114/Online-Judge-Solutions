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
int t,i,j,cs=0,a,b;

vi kmp(string s){
    int n=s.size(),index=0;
    vi lsp(n+1);

    for(i=1;i<n;){
        if(s[i]==s[index]){
            index++;
            lsp[i]=index;
            i++;
        }
        else{
            if(index!=0){
                index=lsp[index-1];
            }
            else{
               lsp[i]=0;
               i++;
            }
        }
    }
    return lsp;
}

int main()
{
    string s,s1,s2,ch;
    cin>>ch>>s2;
    a=ch.size();
    vi p=kmp(ch);
    b=p[a-1];
    s1=ch.substr(0,a-b);

    s=s1+'?'+s2;
    int n,n1,n2;
    n=s.size(),n1=s1.size(),n2=s2.size();
    vi lsp=kmp(s);
    for(i=n1+1;i<n;i++){
        if(lsp[i]==0){
            cout<<"YES"<<"\n";
            return 0;
        }
    }
    vi v;
    for(i=n-1;i>n1;){

        v.pb(lsp[i]);
        i-=lsp[i];
    }
    cout<<"NO"<<"\n";
   i=v.size();
   i--;
   cout<<s1.substr(0,v[i]);
   i--;

   for( ; i>=0;i--){
        cout<<" "<<s1.substr(0,v[i]);
   }
    cout<<"\n";
    return 0;
}


