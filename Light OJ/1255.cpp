#include<bits/stdc++.h>
using namespace std;

const int N=1000007;
int pb[N];
int m=1e9+7;
int base=347;
void power()
{
    int i;
    pb[0]=1;
    for(i=1;i<N;i++){
        pb[i] = ( pb[i-1] * base ) % m ;

    }
}

int Hash(string s)
{
    long long ans=0;
    int i;
    for(i=0;i<s.size();i++)
        ans = ( ans * base + s[i] ) % m;
    return ans;

}

vector<long long> hashlist(string s)
{
    int n=s.size(),i;
    vector<long long> ans(n+1);
    ans[0]=0;

    for(i=1;i<=n;i++){
        ans[i] = ( ans[i-1] * base + s[i-1] ) % m;
    }

    return ans;
}

long long hash_lr( vector<long long> hashlist ,int l, int r)
{
    int len=r-l+1;

    return (( ( hashlist[r] - hashlist[l-1] * pb[len] ) % m ) + m ) % m ;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    power();
    char buffer{N};
    int cs=0,t,i;
    scanf("%d",&t);
    while(t--){
        string a,b;
//        scanf("%s",buffer); a=buffer;
//        scanf("%s",buffer); b=buffer;
        cin>>a>>b;

        int na=a.size(),nb=b.size();
        long long hash_b=Hash(b);
        vector <long long > hashlist_a = hashlist(a);

        int ans=0;
        for(i=1;i+nb-1<=na;i++){
            if( hash_lr ( hashlist_a , i , i+nb-1 ) == hash_b ) ans++;

        }

        printf("Case %d: %d\n",++cs,ans );
    }
}
