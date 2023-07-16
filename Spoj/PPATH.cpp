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

const int N=1e4+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,mark[N],prime[N],k=0,dis[N];
bool visited[N];
vi adj[N];

void sieve(){
    for(i=2;i<N;i+=2) mark[i]=1;
    for(i=3;i<N;i+=2){
        if(!mark[i]){
            for(j=3*i;j<N;j+=2*i)
                mark[j]=1;
        }
    }
    for(i=1001;i<N;i+=2){
        if(!mark[i]) prime[k++]=i;
    }
}

void make_graph(){
    i=0;
    while(i<k){
        a=prime[i]%10;

        for(j=a+1;j<10;j++){
            //if(j==a) continue;
            if(!mark[prime[i]-a+j]){
                adj[prime[i]].pb(prime[i]-a+j);
                adj[prime[i]-a+j].pb(prime[i]);
            }
        }
        a=prime[i]%100;
        a=a-a%10;
        for(j=a+10;j<100;j+=10){
           // if(j==a) continue;
            if(!mark[prime[i]-a+j]){
                adj[prime[i]].pb(prime[i]-a+j);
                adj[prime[i]-a+j].pb(prime[i]);
            }
        }

           //  for(i=0;i<adj[1009].size();i++) cout<<adj[1009][i]<<endl;
        a=prime[i]%1000;
        a=a-a%100;
       // if(prime[i]==1009)
        //    cout<<a<<endl;
        for(j=a+100;j<1000;j+=100){
           // if(j==a) continue;
            if(!mark[prime[i]-a+j]){
                adj[prime[i]].pb(prime[i]-a+j);
                adj[prime[i]-a+j].pb(prime[i]);
            }
        }
        a=prime[i]-prime[i]%1000;
        for(j=a+1000;j<10000;j+=1000){
          //  if(j==a) continue;
            if(!mark[prime[i]-a+j]){
                adj[prime[i]].pb(prime[i]-a+j);
                adj[prime[i]-a+j].pb(prime[i]);
            }
        }
        i++;
    }
}
void clear_(){
    for(i=0;i<N;i++)
        visited[i]=false,dis[i]=0;
}
int bfs(int a,int b){
    visited[a]=true;
    dis[a]=0;
    queue<int>q;
    q.push(a);
    while(!q.empty()){
        int s=q.front();q.pop();
        for(auto u:adj[s]){
            if(visited[u]) continue;
            visited[u]=true;
            dis[u]=dis[s]+1;
            if(u==b)
                return dis[u];
            q.push(u);
        }
    }
    return -1;
}
int main()
{
    sieve();
    make_graph();

    w(t){
        cin>>a>>b;
        clear_();
        if(a==b) cout<<0<<endl;
        else
        cout<<bfs(a,b)<<endl;

     //  for(i=0;i<adj[1009].size();i++) cout<<adj[1009][i]<<endl;

    }
}
