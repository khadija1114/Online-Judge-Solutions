#include<bits/stdc++.h>

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//using orderedMultiset = tree<T ,null_type,std::less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;

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

bool solve()
{
    int n, cnt = 0, pos = 0, neg = 0;
    cin >> n;

    vector <ll> v(n);
    map<ll, int> mp;
    for (auto &it: v){
        cin >> it;
        mp[it]++;
        if (it == 0) cnt++;
        else if (it < 0) neg++;
        else pos++;

    }

    if (cnt) {
        if (pos >= 2 || neg >= 2)
            return false;
    }
    if (pos >= 3 || neg >= 3)
        return false;

    vector <int> ar;
    for (auto it: v) {
        if (it != 0)
        ar.pb(it);
    }

    if (cnt)
        ar.pb(0);

    for (int i = 0; i+2 < ar.size(); i++){
        for (int j = i+1; j+1 < ar.size(); j++) {
            for (int k = j+1; k < ar.size(); k++) {
                ll a = ar[i]+ar[j]+ar[k];
                if (mp[a] == 0)
                    return false;
            }
        }
    }

    return true;


}



int main()
{
    w(t)
    {
        if (solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}



