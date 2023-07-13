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

    int n, i, j;
    cin >> n;
    int ar[n], freq[n+1]= {}, mex = 0, suffixMex[n] = {};
    for (auto &it: ar){
        cin >> it;
    }

    for (i = n-1; i >= 0; i--){
        freq[ar[i]]++;
        while (freq[mex]) mex++;
        suffixMex[i] = mex;
    }

    //for (auto it: suffixMex) cout << it << " " ;

    set <int> s;
    vector <int> ans;
    //for (i = 0; i < mex; i++) s.insert(i);

    for (i = 0; i < n; i++){
        if (s.empty()){
            ans.pb(mex);

            for (j = 0; j < mex; j++){
                s.insert(j);
            }
        }

        if (s.find(ar[i]) != s.end())
            s.erase(ar[i]);

        if (s.empty() && i != n-1)
            mex = suffixMex[i+1];
    }

    cout << ans.size() << endl;
    for (auto it: ans)
        cout << it << " ";
    cout << endl;

}



int main()
{
    w(t)
    solve();
}





