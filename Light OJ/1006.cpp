#include<bits/stdc++.h>
using namespace std;

const int N = 10002;
int ans[N], mod = 10000007;

int fn(int n) {
    if (ans[n] != -1) return ans[n] % mod;
    return ans[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) % mod;
}

void init(){
    for (auto &it: ans){
        it = -1;
    }
}

int main() {
    int n, cases;#include<bits/stdc++.h>
using namespace std;

const int N = 10002;
int ans[N], mod = 10000007;

int fn(int n) {
    if (ans[n] != -1) return ans[n] % mod;
    return ans[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) % mod;
}

void init(){
    for (auto &it: ans){
        it = -1;
    }
}

int main() {
    int n, cases;
    scanf("%d", &cases);

    for (int caseno = 1; caseno <= cases; ++caseno) {

        init();
        for (int i = 0; i <= 5; i++){
            scanf("%d ", &ans[i]);
        }
        scanf("%d", &n);

        printf("Case %d: %d\n", caseno, fn(n) % mod);
//        for (int i = 1; i <= n; i++) cout << ans[i] << " " ;
//        cout << endl;
    }

}

    scanf("%d", &cases);

    for (int caseno = 1; caseno <= cases; ++caseno) {

        init();
        for (int i = 0; i <= 5; i++){
            scanf("%d ", &ans[i]);
        }
        scanf("%d", &n);

        printf("Case %d: %d\n", caseno, fn(n) % mod);
//        for (int i = 1; i <= n; i++) cout << ans[i] << " " ;
//        cout << endl;
    }

}
