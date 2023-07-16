#include<bits/stdc++.h>
using namespace std;
const int maxN = 200005;
int par[maxN];

void setPar(int n)
{
    for (int i = 0; i <= n; i++)
        par[i] = i;
}

int findPar(int a)
{
    if (par[a] == a) return a;
    return par[a] = findPar(par[a]);
}

void Union(int a, int b)
{
    a = findPar(a);
    b = findPar(b);

    if (a > b) swap(a, b);
    par[a] = b;
}

int main()
{
    int n, q;
    cin >> n >> q;
    int l[q], r[q], c[q], ans[n+1];
    setPar(n);

    for (int i = 0; i < q; i++) {
        cin >> l[i] >> r[i] >> c[i];
        l[i]--;
        r[i]--;
    }


    for (int i = q-1; i >= 0; i--) {
        int left = findPar(l[i]);
        while (left <= r[i]){
            ans[left] = c[i];
            Union(left, left+1);
            left = findPar(left);
        //    cout << left << " ";
        }
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << endl;

}
