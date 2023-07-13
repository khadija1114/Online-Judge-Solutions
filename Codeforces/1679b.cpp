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
long long  mod=1e9+9;
int t,cs=0, dxx[]={1,0,0,-1, -1, 1, 1, -1},dyy[]={0,-1,1,0, -1, 1, -1, 1};

void solve()
{
    int n, m;
    cin >> n >> m;

    string s[n];

    for (auto &it : s)
        cin >> it;

    bool ans = false, found = false;;
    int x = -1, y = -1, cnt = 0;

    for (int i = 0; i < n && !found; i++){

        for (int j = 0; j < m && !found; j++) {
            if (s[i][j] == 'R'){
                    cnt = 0;
                for ( x = 0; x < n; x++){
                    for (y = 0; y < j; y++){
                        if (s[x][y] == 'R')
                            {
                                cnt = 1;
                                break;

                            }
                    }
                }
                if (cnt == 0) {
                    for (x = 0; x < i; x++){
                        for (y = 0; y < m; y++){
                            if (s[x][y] == 'R')
                            {
                                cnt = 1;
                                break;

                            }
                        }
                    }
                }

                if (cnt == 0) {
                    found = true;
                }
            }
        }
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}



int main()
{
    w(t) {
        solve();
    }
}



