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

bool solve()
{
    int n;
    cin >> n;
    vector<int> ar(n), v(n+2);

    for (auto &it: ar ) cin >> it;

    int temp = 0;
    for (auto it: ar) {
        temp += it;
    }

    if (temp == 0 || temp == 3*n) return true;

    vector<int> mark[4];
    mark[0].pb(0);  mark[0].pb(1); mark[0].pb(2);
    mark[1].pb(0);  mark[1].pb(2); mark[1].pb(1);
    mark[2].pb(2);  mark[2].pb(0); mark[2].pb(1);
    mark[3].pb(2);  mark[3].pb(1); mark[3].pb(0);

    for (int i = 0; i < n; i++) {
        int k = ar[i];
        for (int j = i, l = 0; j <= i+2; j++) {
            v[j] += mark[k][l++];
        }
    }

   // for (auto it: v) cout << it << " " ;

//   vector<pair<int, int>> toSort(n+2);
//
//   for (int i = 0; i < n+2; i++){
//    toSort.pb({v[i], i});
//   }
//
//   sort(toSort.bg, toSort.en);



    for (int i = 0; i < n; i++) {
        if (ar[i] == 0) {
            if (v[i] <= v[i+1] && v[i+1] <= v[i+2]) ;
            else
                return false;
        }
        else if (ar[i] == 1) {
            if (v[i] <= v[i+2] && v[i+1] >= v[i+2]) ;
            else if (v[i] <= v[i+2] && v[i+1] <= v[i]);
            else
                return false;
        }
        else if (ar[i] == 2){
            if (v[i] >= v[i+2] && v[i+1] <= v[i+2]) ;
            else if (v[i] <= v[i+1] && v[i+2] <= v[i]);
            else
                return false;
        }
        else {
            if (v[i] >= v[i+1] && v[i+1] >= v[i+2]) ;
            else
                return false;
        }
    }

    return true;
}



int main()
{
    w(t){
        if (solve())
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

}




