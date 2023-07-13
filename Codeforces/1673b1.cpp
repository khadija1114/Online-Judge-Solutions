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

bool  solve()
{
    map <char, int> mp, mp2;
    string s;
    cin >> s;
    int n = s.size(), i, j, unq = 0;
    for (auto it: s)
        mp[it] = true;

    for (auto it: mp){
        char c = it.ff;
        int temp = 0, ar[26] = {};
        for (i = 0; i < n; i++){
            if (s[i] == c)
                for (auto &it: ar)
                    it = 0;
            else {
                ar[s[i]-'a']++;
               // cout << c << " " << i << " " << s[i] << " " << ar[c-'a'] << endl;
                if (ar[s[i]-'a'] > 1)
                    return false;
            }
        }
    }

    return true;

}



int main()
{
    ws(t){
        if (solve())
            cout << "YES";
        else
            cout << "NO";
        cout <<endl;
    }
   // solve();
}



