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
int t,cs=0, dxx[]={1,0,0,-1},dyy[]={0,-1,1,0};

void solve()
{
    int n;
    cin >> n;

    vector <int> v(n+1), ch(n+1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        ch[v[i]]++;
    }

    if (n == 1) {
        cout << 1 << endl << 1 << endl << 1 << endl;
        return ;
    }

    vector <vector<int>> ans;

    for (int j = 1; j <= n; j++) {
        if (ch[j] == 0) {
            vector <int> temp;
            int i = j;
            while (v[i]) {
                temp.pb(i);
                int a = i;
                i = v[i];
                v[a] = 0;
            }
//            cout << j << endl;
//            for (auto it: temp) cout << it << " ";
//            cout << endl;

            reverse (temp.bg, temp.en);
            ans.pb(temp);
        }
    }

    cout << ans.size() <<endl;
    for (auto it: ans) {
        cout << it.size() << endl;
        for (auto itt: it)
            cout << itt << " ";
        cout << endl;
    }
}


int main()
{
    w(t)
    solve();
}



