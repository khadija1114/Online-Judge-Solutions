///using difference array as bitTree for range update

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int bit[N], n, ar[N];
string s;

int getsum (int index)
{
    int sum = 0;
    while (index){
        sum += bit[index];
        index -= (index & -index);
    }

    return sum;
}

void update(int index, int value)
{
    while (index <= n){
        bit[index] += value;
        index += (index & -index);
    }
}

void buildTree()
{
    for (int i = 0; i < n; i++){
        if (s[i] == '1'){
            update (i+1, 1);
            update (i+2, -1);
        }
    }
}

void free()
{
    for (int i = 0; i < N-1; i++)
        bit[i] = 0;
}

int main()
{
    int t, q, l, r, cs = 0;
    char ch;
    cin >> t;
    cin.ignore();

    while (t--){

        free ();
        cin >> s >> q;
        n = s.size();

        buildTree();

//        int presum = 0;
//        for (int i =1; i <= n; i++){
//            cout << getsum(i) << " ";
//        }
//        cout <<endl;

        printf ("Case %d:\n", ++cs);

       while (q--){
            cin >> ch;

            if (ch == 'I'){
                cin >> l >> r;
                update (l , 1);
                update (r+1, -1);

            }
            else {
                cin >> l;
           //     cout << getsum(l) << endl;
                l = getsum(l);
                if (l & 1){
                    cout << 1 << "\n";
                }
                else
                    cout << 0 << "\n";
            }
       }

    }
}
