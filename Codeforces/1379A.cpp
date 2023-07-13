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

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    ws(t){
        cin>>n>>s;
        int ar[n+2]={},ans=0;
        for(i=0;i+7<=n;i++){
            if(s.substr(i,7)=="abacaba") ans++;
        }
        if(ans>1){
            cout<<"No"<<endl;
            continue;
        }
        if(ans==1){
            cout<<"Yes"<<endl;
            for(i=0;i<n;i++){
                if(s[i]=='?') cout<<'d';
                else cout<<s[i];
            }
            cout<<endl;
            continue;
        }
        j=0; string ch="abacaba";
        ans=0;
        for(int k=0;k+7<=n;k++){
                i=k; j=0;
            while((s[i]==ch[j] || s[i]=='?') && i<n && j<7) {
              //  s[i]=ch[j];
                i++;
                j++;

            }
            if(j==7){
                    j=i;
                cout<<"Yes"<<endl;
            for(i=0;i<k;i++){
                if(s[i]=='?') cout<<'d';
                else cout<<s[i];
            }
            for(i=0;i<7;i++)
                cout<<ch[i];
             for(i=j;i<n;i++){
                if(s[i]=='?') cout<<'d';
                else cout<<s[i];
            }
            ans=1;
            cout<<endl;
            break;
            }
        }
        if(ans==0){
            cout<<"No"<<endl;
            continue;
        }

    }
}

