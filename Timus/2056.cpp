#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    double av = 0;
    cin >> n;

    for (i = 0; i < n; i++){
        int a;
        cin >> a;
        if (a == 3){
            cout << "None" << "\n";
            return 0;
        }
        av += a;
    }
    av /= n;
    if (av == 5){
        cout << "Named" << "\n";
        return 0;
    }
    if (av >= 4.5){
        cout << "High" << "\n";
        return 0;
    }
    cout << "Common" << "\n";
    return 0;
}
