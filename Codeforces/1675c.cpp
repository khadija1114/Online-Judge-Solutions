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
   string s;
   cin >> s;
    int n, one = 0, zero = 0, ques = 0, ans = 0;

 //   cout << s << endl;
//    for (auto it: s)
//        if (it == '1') one++;
//    else if (it == '0') zero ++;
//    else ques++;


 //   cout << s << endl;
 //   if (one+zero == 0){
//        cout << n << endl;
//        return ;
//    }

     n = s.size();
    int i = 0;
    zero = n-1;
    one = 0;
    while (i < n) {
        if (s[i] == '0'){
            zero = i;
            break;
        }
        i++;
    }
    while (i >= 0) {
        if (s[i] == '1'){
            one = i;
            break;
        }
        i--;
    }
    cout << zero - one + 1 << endl;
}



int main()
{
    ws(t)
    solve();
}



