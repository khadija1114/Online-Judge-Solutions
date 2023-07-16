#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=100000;
int t,i,j,cs=0,n,a,b;
char s[10000005];

int main()
{
    w(t){
        scanf("%s",s+1);
        s[0]='?';
        n=strlen(s);
        bool dp[n+1]={};
        dp[0]=1;
        for(i=0;i<n;i++){
            if(!dp[i])
                continue;
            if(s[i+1]=='i' && s[i+2]=='n'){
                dp[i+2]=1;
                if(s[i+3]=='p' && s[i+4]=='u' && s[i+5]=='t')
                    dp[i+5]=1;
            }
            else if(s[i+1]=='o'){
                 if(s[i+2]=='n' && s[i+3]=='e')
                    dp[i+3]=1;
                 if(s[i+2]=='u' && s[i+3]=='t'){
                    dp[i+3]=1;
                     if(s[i+4]=='p' && s[i+5]=='u' && s[i+6]=='t')
                        dp[i+6]=1;
                 }

            }
            else if(s[i+1]=='p' && s[i+2]=='u' && s[i+3]=='t' && s[i+4]=='o' && s[i+5]=='n')
                dp[i+5]=1;
        }
        if(dp[n-1])
            printf("YES\n");
        else
            printf("NO\n");

    }
}

