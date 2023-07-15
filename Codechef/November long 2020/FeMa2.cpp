#include<bits/stdc++.h>
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;
char o,p;

int main()
{
    w(t){
        cin>>n>>k>>s;
        s+='X';
        int ar[n+1]={};
        bool br[n]={};
        for(i=1;i<=n;i++){
            ar[i]=ar[i-1];
            if(s[i-1]==':') ar[i]++;
        }
        int cnt=0;
        stack<int> m,f;
        for(i=0;i<=n;i++){
            if(s[i]=='X'){
                while(m.size() && f.size()){
                    a=m.top(),b=f.top();
                    //cout<<a<<" "<<endl;
                    while(k<abs(a-b)+abs(ar[a+1]-ar[b])){
                        if(b>a){
                        f.pop();
                        if(f.empty()) break;
                        b=f.top();
                        }
                        else{
                        m.pop();
                        if(m.empty()) break;
                        a=m.top();
                        }
                    }
                    if(k>=abs(a-b)+abs(ar[a+1]-ar[b])){
                    cnt++;
                    m.pop(),f.pop();
                    }
                }
                while(!m.empty())
                    m.pop();
                while(!f.empty())
                    f.pop();
            }
            else if(s[i]=='M') m.push(i);
            else if(s[i]=='I') f.push(i);
        }
        cout<<cnt<<endl;
    }
}



