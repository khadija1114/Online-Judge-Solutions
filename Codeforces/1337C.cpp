#include<bits/stdc++.h>
#define mod 1e9+9
#define make_pair mp
#define push_back pb
#define w(x) cin>>x;while(x--)
typedef long long ll;
using namespace std;

int main()
{
    int t,i,j,cs=0,n,k,u,v;
    cin>>n>>k;
    t=n;vector<vector<int>> adj(n+2);
   vector<int>result;
    vector<bool>visit(n+2,0);
    while(t--){
        cin>>u>>v;
        if(v<u) swap(u,v);
        adj(u).pb(v);
        child[u]++;
    }


    for(auto it=result.begin();it!=result.end();it++)
            cout<<*it<<" ";




}


