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
    int sum = 0;
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it: v) {
        cin >> it;
        sum += it;
    }

    sort (v.bg, v.en);
    if (v[0] == v[n-1]){
        cout << "YES" << endl;
        return ;
    }

    for (int i = 0; i < n; i++) {
        int temp = sum - v[i];
        if (temp % (n-1) == 0 && temp/(n-1) == v[i]){
            cout << "YES"<< endl;
            return ;
        }
    }

    cout << "NO" << endl;



}



int main()
{
    w(t) {
        solve();
    }
}




