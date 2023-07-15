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

const int N=10001;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    w(t){
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        int freq[11]={};
        map<int,int> cnt;
        for(i=0;i<n;i++)
            freq[ar[i]]++;

//        for(i=0;i<11;i++) cout<<i<<" "<<freq[i]<<endl;
        for(i=1;i<=10;i++){
            if(freq[i])
            cnt[freq[i]]++;
        }
        int mx=0,qns=0;
        for(auto it:cnt){
       //     cout<<it.ff<<" "<<it.ss<<endl;
            if(mx<it.ss){
                mx=it.ss;
                qns=it.ff;
            }
        }
        cout<<qns<<endl;
    }
}

