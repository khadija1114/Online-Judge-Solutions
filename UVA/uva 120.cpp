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
int t, cs=0, dxx[]={1,0,0,-1}, dyy[]={0,-1,1,0};

void solve(vector<int> v)
{
    int n;
    vector <int>  sv, ans;

    for (auto it: v) {
        sv.push_back(it);
    }

     for (auto it: v) cout << it << " ";
     cout << endl;

    sort(sv.bg, sv.en);

    n = v.size();
    for (int j = n-1; j >= 0; j--){
//        cout << j << " " << sv[j] << " " << v[j] << endl;
        if (sv[j] != v[j]) {
            if (sv[j] == v[0]){
                ans.push_back(n-j);
                reverse(v.begin(), v.bg+j+1);
            }
            else {
                for (int k = 1; k < n; k++) {
                    if (sv[j] == v[k]){
                        reverse(v.bg, v.bg+k+1);
                        reverse(v.bg, v.bg+j+1);
                        ans.pb(n-k);
                        ans.pb(n-j);
                        break;
                    }
                }
            }

//            for (auto it : v) cout << it << " " ;
//            cout << endl;

        }
    }

    for (auto it: ans) cout << it << " " ;
    cout << 0 << endl;

}



int main()
{
    string input;
    while (getline (cin, input)) {

        stringstream ss;
        ss << input;

        int a;
        vector <int> v;
        while (ss >> a) {
            v.pb(a);
        }

        solve(v);

    }

}



