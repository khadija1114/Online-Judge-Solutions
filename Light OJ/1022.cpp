#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;


int main()
{
    int t, cs = 0;
    cin >> t;
    while (t--){
        double ans, r, a;
        cin >> r;
        a = 2*r;

        cout << "Case "<< ++cs << ": " << fixed << setprecision(2) << a*a - pi*r*r << "\n";
    }
}
