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
string s,ch;

int main()
{

    w(t){
        cin>>s;
        n=s.size();
        bool dp[n+10]={};

        s+="       ";
        dp[n]=1;
        for(i=n-2;i>=0;i--){
            ch=s.substr(i,2);
            if(ch=="in" && dp[i+2])
                dp[i]=1;
            else{
                ch=s.substr(i,3);
                if((ch=="out" || ch=="one" ) && dp[i+3])
                    dp[i]=1;
                else{
                    ch=s.substr(i,5);
                    if((ch=="puton" || ch=="input" )&& dp[i+5])
                        dp[i]=1;
                    else{
                        ch=s.substr(i,6);
                        if(ch=="output" && dp[i+6])
                            dp[i]=1;
                    }
                }
            }

        }
        if(dp[0])
            printf("YES\n");
        else
             printf("NO\n");

    }
}


