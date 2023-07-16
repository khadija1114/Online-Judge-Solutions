#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> q;
    int x,y,z;
    cin>>x>>y>>z;
    q.push_back(x);
    q.push_back(y);
    q.push_back(z);
    cout<<q.front()*q.back()*q[1]*2<<endl;

}

