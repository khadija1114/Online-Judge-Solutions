#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, j, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;

        if ( b == 1 ){
            cout <<"NO"<<"\n";
            continue;
        }

        if (b==2){
            b = 4;
        }

        cout << "YES" << "\n" << a << " " << a*(b-1) << " " << a*b << "\n";

    }
}
