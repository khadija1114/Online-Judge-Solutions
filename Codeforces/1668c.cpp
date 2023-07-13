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
    int n;
    cin >> n;
    vector <long long> v(n);

    for (auto &it: v) cin >> it;


    long long ans = 1e18;

    for (int i = 0; i < n; i++) {
        long long temp = 0;
        vector <long long> tv(n) ;

        for (int j = i-1; j >= 0; j--) {
            temp += (tv[j+1]/v[j]) + 1;
            tv[j] = ((tv[j+1]/v[j])+1 ) * v[j];

        //    cout << 1111 << " " << i << " " << j << " " << temp << " " << tv[j] << endl;
        }

        for (int j = i+1; j < n; j++) {
            temp += (tv[j-1]/v[j]) + 1;
            tv[j] = ((tv[j-1]/v[j]) + 1) * v[j];
       //     cout << 2222 << " " << i << " " << j << " " << temp << " " << tv[j] << endl;
        }

//        cout << endl << i << " " << temp << endl;
//        for (auto it: tv)
//            cout << it << " " ;
//        cout << endl << endl;

        ans = min (ans, temp);
    }

    cout << ans << endl;

}



int main()
{
    solve();
}



