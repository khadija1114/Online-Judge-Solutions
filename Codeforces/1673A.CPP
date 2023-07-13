#include<bits/stdc++.h>
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
int t,cs=0, dxx[]={1,0,0,-1},dyy[]={0,-1,1,0};

void solve()
{
    string s;
    cin >> s;
    int i;

    int ans = 0;
    if (s.size() == 1){
        cout << "Bob " << int(s[0]-'a')+1 << endl;
        return ;
    }
    else
        for (i = 1; i < s.size()-1; i++)
        ans += (s[i]-'a') + 1;
    if (s.size() % 2 == 0){
        ans += s[0] + s[s.size()-1] - 'a' - 'a' + 2;
    }
    else {
        if (s[0] > s[s.size()-1])
        ans += s[0]  - s[s.size()-1];
    else
        ans += s[s.size()-1]  - s[0];
    }


    cout << "Alice " << ans << endl;
}



int main()
{
    ws(t)
    solve();
}



