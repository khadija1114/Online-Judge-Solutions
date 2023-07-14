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
int t,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},m,cnt;
string s[8];
vi node;

void solve(int index)
{
   // cout<<index<<endl;
    if(index==8){
        cnt++;
        //cout<<cnt<<endl;
        return ;
    }

    for(int j=0;j<8;j++){
        if(s[index][j]=='*') continue;
       // cout<<index<<endl;
       bool used=false;
        for(int k=0;k<index;k++){
            if(node[k]==j || abs(node[k]-j)==index-k){
                used=1;
                break;
            }
        }
        if(used) continue;
        //cout<<index<<endl;
        node.pb(j);
     //   cout<<index<<" "<<j<<endl;
        solve(index+1);
        node.pop_back();
    }
}

int main()
{
    rep(i,7) cin>>s[i];
    solve(0);
    cout<<cnt<<endl;
}



