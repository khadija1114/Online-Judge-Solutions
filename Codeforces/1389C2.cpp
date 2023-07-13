#include<bits/stdc++.h>
#define mp make_pair
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
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    ws(t){
        cin>>s;
        int n=s.size();
        int v[100]={};
        int ar[10]={};
        bool mark[10];
        for(i=0;i<n;i++){
            ar[s[i]-'0']++;
        }
        for(i=0;i<10;i++){
                a=10*i;
                for(int k=0;k<n-1; ){
                    if(s[k]-'0'==i){
                            k++; for(int x=0;x<10;x++) mark[x]=false;
                        while(s[k]-'0'!=i && k<n){
                            if(mark[s[k]-'0']==false)
                            v[a+s[k]-'0']++;
                            mark[s[k]-'0']=true;
                            k++;
                        }
                    }
                    else{
                        k++;
                    }
           }
        }
        b=0;
        int mx=-1,mx2=-1,ind;
        for(i=0;i<10;i++){
            if(mx<ar[i]){
                mx=ar[i];
            }
        }
        for(i=0;i<100;i++){
            if(mx2<v[i]){
                mx2=v[i];
                ind=i;
            }
        }
        int ans;
        if(mx2*2>mx){
            ans=n-2*mx2;
        }
        else
            ans=n-mx;
        cout<<ans<<endl;
    }
}
