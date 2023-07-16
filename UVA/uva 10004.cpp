#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,l,u,v,i;
    while(scanf("%d",&n)==1 && n){
        scanf("%d",&l);
        vector<vector<int>> graph(n);
        while(l--){
            scanf("%d%d",&u,&v);
            graph[u].pb(v);
            graph[v].pb(u);
        }
        vector<int> color(n,2);
        bool ans=true;
        queue<int> q;
        color[0]=0;
        q.push(0);
        while(!q.empty() && ans){
            int present=q.front();
            q.pop();
            for(i=0;i<graph[present].size();i++){
                int next=graph[present][i];
                if( color[present]==color[next]){
                    ans=false;
                    break;
                }
                else if(color[next]==2){
                    color[next]=1-color[present];
                    q.push(next);

                }
            }
        }
        if(ans) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");
    }
}
