#include<bits/stdc++.h>
using namespace std;
#define MAX 100000105
#define pb push_back
#define ll long long
#define ull unsigned
vector<int>v;
bitset<MAX>bt;
ull prime[5761558];
ull lcm[5761558];
int cnt;
void sieve()
{
    bt[0]=bt[1]=1;
    for(int i=4; i<=MAX; i+=2)
        bt[i]=1;
    for(int i=3; i*i<=MAX; i+=2)
    {
        if(bt[i]==0)
        {
            for(int j=i*i; j<=MAX; j+=i)
                bt[j]=1;
        }
    }
    prime[cnt++]=2;
    for(int i=3; i<=MAX; i+=2)
    {
        if(bt[i]==0)
            prime[cnt++]=i;
    }
}
void prefix_lcm()
{
    lcm[0]=2;
    for(int i=1; i<cnt; i++)
        lcm[i]=prime[i]*lcm[i-1];
}
ull find_others_prime_product(int n)
{
    ull m;
    ull ans=1;
    for(int i=0; prime[i]*prime[i]<=n; i++)
    {
        m=n;
        m/=prime[i];
        while(m>=prime[i])
        {
            m/=prime[i];
            ans*=prime[i];
        }
    }
    return ans;
}
int main()
{
    sieve();
    prefix_lcm();
    int t,n;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&n);
        ull ans=find_others_prime_product(n);
        int up = upper_bound(prime,prime+cnt,n)-prime;
        up--;
        ans *= lcm[up];
        printf("Case %d: %u\n", i, ans);
    }
}
