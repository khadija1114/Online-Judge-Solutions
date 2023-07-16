#include<bits/stdc++.h>
using namespace std;
#define pb push_back

void dfs( vector<int> &result, vector<vector<int>> &graph,vector<bool> &visit,int  present){
    int i;
    visit[present]=1;
    for(i=0;i<graph[present].size();i++){
        int next=graph[present][i];
        if(visit[next]==0){
            dfs(result,graph,visit,next);
        }

    }
    result.pb(present);

}

int main()
{
    int n,m,u,v;
    while(cin>>n>>m && n+m!=0){
        vector<vector<int>> graph(n+2);
        vector<int>result;
        vector<bool>visit(n+2,0);
        int i,j;
        while(m--){
            cin>>u>>v;
            graph[u].pb(v);
        }
        for(i=1;i<=n;i++){
            if(visit[i]==0)
                dfs(result,graph,visit,i);
        }

        reverse(result.begin(),result.end());
        for(auto v: result) cout<<v<<" ";

        cout<<endl;
    }
}
