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


const int N=1e6+1;
int t,i,j,cs=0,n,a,m,b,q;
int v[N],k[N];


int main()
{
    w(t){
        cin>>n>>m;
        string s[n+1];
        bool mark[n+1][m+1]={false};
        cin>>a>>b;
        int cnt=0,cnt1=0;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){

                if(s[i][j]=='.'){
                        cnt++;
            }
        }
        }
        if(2*a<=b){
            cout<<a*cnt<<endl;
            continue;
        }
        else{
            for(i=0;i<n;i++){
                for(j=0;j<m-1;j++){
                if(s[i][j]=='.' && s[i][j+1]=='.')
                {
                    cnt1++;
                    j++;
                }
            }
        }
        cout<<cnt1*b+(cnt-cnt1*2)*a<<endl;
    }
    }

}



