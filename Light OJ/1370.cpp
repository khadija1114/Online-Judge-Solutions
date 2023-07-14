#include<bits/stdc++.h>
#define pb push_back
#define bg begin()
#define en end()
#define w(x) scanf("%d",&x);while(x--)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef vector<int> vi;

const int N=2*1e6+2;
int t,cs=0;
vi phi(N);


void eular()
{
   for (int i = 0; i < N; i++) phi[i] = i;
    phi[1] = 0;

    for (int i = 2; i < N; i++) {
        if (phi[i] == i) {
            for (int j = i; j < N; j += i) {
                phi[j] -= phi[j]/i;
            }
        }
    }

    for (int i = 2; i < N; i++) {
       phi[i] = max(phi[i], phi[i-1]);
    }

}



ll solve()
{
    int n;
    scanf("%d", &n);

    vi v(n);
    ll ans = 0;
    int it;

    for (int i = 0; i < n; i++) {
        scanf("%d", &it);
        auto itt = lower_bound(phi.begin(), phi.end(), it)-phi.begin();
        ans += itt;
    }

    return ans;
}



int main()
{
    eular();
    w(t){
         printf("Case %d: %lld Xukha\n", ++cs, solve());
    }
}



