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
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
map<string,bool> visited,nall;

struct  node{
    string s;
    int cnt=0;
    node(string st,int a){
        s=st;
        cnt=a;
    }
};

int bfs(string src,string dst){
    visited.clear();
    visited[src]=1;
    queue<node> q;
    node u(src,0);
    q.push(u);
    while(!q.empty()){
        u=q.front();
        q.pop();
        if(nall[u.s]) continue;
        if(u.s==dst) return u.cnt;
        for(int i=0;i<3;i++){
            string tmp=u.s;
            if(tmp[i]=='z') tmp[i]='a';
            else tmp[i]++;
            if(!visited[tmp]){
                node v(tmp,u.cnt+1);
                q.push(v);
                visited[tmp]=1;
            }
            tmp=u.s;
            if(tmp[i]=='a') tmp[i]='z';
            else tmp[i]--;
            if(!visited[tmp]){
                node v(tmp,u.cnt+1);
                q.push(v);
                visited[tmp]=1;
            }
        }
    }
    return -1;
}
int main()
{
    ws(t){
        string str1,str2;
        cin>>str1>>str2;
        nall.clear();
        ws(n){
            string s1,s2,s3;
            cin>>s1>>s2>>s3;
            string sub1="   ";
            for(i=0;i<s1.size();i++){
                sub1[0]=s1[i];
                for(j=0;j<s2.size();j++){
                    sub1[1]=s2[j];
                    for(int k=0;k<s3.size();k++){
                        sub1[2]=s3[k];
                        nall[sub1]=1;
                    }
                }
            }
        }
        printf("Case %d: %d\n",++cs,bfs(str1,str2));
    }
}

