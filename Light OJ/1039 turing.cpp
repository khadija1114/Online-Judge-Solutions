#include <bits/stdc++.h>

#define pii             pair <int,int>
#define sc              scanf
#define pf              printf
#define Pi              2*acos(0.0)
#define ms(a,b)         memset(a, b, sizeof(a))
#define pb(a)           push_back(a)
#define MP              make_pair
#define db              double
#define ll              long long
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define D(x)            cout<<#x " = "<<(x)<<endl
#define VI              vector <int>
#define DBG             pf("Hi\n")
#define MOD             100007
#define MAX             10000
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
#define SZ(a)           (int)a.size()
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define loop(i,n)       for(int i=0;i<n;i++)
#define REP(i,a,b)      for(int i=a;i<b;i++)
#define TEST_CASE(t)    for(int z=1;z<=t;z++)
#define PRINT_CASE      printf("Case %d: ",z)
#define all(a)          a.begin(),a.end()
#define intlim          2147483648
#define inf             1000000
#define ull             unsigned long long


using namespace std;

map<string,bool> visited,block;

struct data
{
    string str;
    int cnt=0;
    data(string s, int n)
    {
        str=s;
        cnt=n;
    }
};

bool test(string str)
{
    if(visited[str]) return 0;
    return 1;
}

int bfs(string src,string dst)
{
    visited.clear();
    visited[src]=1;
    data u(src,0);
    queue<data>Q;
    Q.push(u);

    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();

        if(block[u.str])
            continue;
        if(u.str==dst) return u.cnt;

        for(int i=0; i<3; i++)
        {
            string temp=u.str;
            temp[i]++;
            if(temp[i]=='z'+1)
                temp[i]='a';
            if(test(temp))
            {
                visited[temp]=1;
                data v(temp,u.cnt+1);
                Q.push(v);
            }
            string temp1=u.str;
            temp1[i]-=1;
            if(temp1[i]=='a'-1)
                temp1[i]='z';
            if(test(temp1))
            {
                visited[temp1]=1;
                data v(temp1,u.cnt+1);
                Q.push(v);
            }
        }
    }
    return -1;
}
int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t;
    sf(t);
    TEST_CASE(t)
    {
        string str1,str2;
        cin>>str1>>str2;
        int n;
        sf(n);
        while(n--)
        {
            string tmp1,tmp2,tmp3;
            cin>>tmp1>>tmp2>>tmp3;
            loop(i,SZ(tmp1))
            {
                string xx;
                xx+=tmp1[i];
                loop(i,SZ(tmp2))
                {
                    xx+=tmp2[i];
                    loop(i,SZ(tmp3))
                    {
                        xx+=tmp3[i];
                        block[xx]=1;
                        xx.erase(xx.end()-1,xx.end());
                    }
                    xx.erase(xx.end()-1,xx.end());
                }
                xx.erase(xx.end()-1,xx.end());
            }
        }
        PRINT_CASE;
        pf("%d\n",bfs(str1,str2));
        block.clear();
    }
    return 0;
}
