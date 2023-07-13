#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
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

int a[100005],b[100005];
bool ex[100005];
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    memset(b,-1,sizeof(b));
    for (int i=1;i<=n;i++)
    {
        if (a[i]!=a[i-1])
        {
            b[i]=a[i-1];
            ex[b[i]]=1;
        }
    }
    ex[a[n]]=1;
    int m=0;
    for (int i=1;i<=n;i++)
    {
        while (ex[m])
        m++;
        if (b[i]==-1)
        {
            b[i]=m;
            ex[m]=1;
        }
        printf("%d ",b[i]);
    }
}

