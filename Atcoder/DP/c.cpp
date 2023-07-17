#include<bits/stdc++.h>
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
int inf = 1e9+9;
int t,cs=0;


void solve()
{
    int n, k;
    cin >> n;


    vector <int> dp(3);

    for (int i = 0; i < n; i++) {
        vector <int> h(3);

        for (int i = 0; i < 3; i++) cin >> h[i];

        vi temp(3);

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++) {
                if (i != j)
                    temp[j] = max(temp[j], dp[i]+h[j]);
            }
        }

//        for (auto it: temp) cout << it << " " ;
//        cout << endl;

        dp = temp;
    }

    cout << max({dp[0], dp[1], dp[2]}) << endl;


}



int main()
{
  //  w(t)
    {
        solve();
    }
}



