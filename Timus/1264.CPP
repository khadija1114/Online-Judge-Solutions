#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> q;
    int x,y;
    cin>>x>>y;
    q.push_back(x);
    q.push_back(y);
    cout<<q.front()*(q.back()+1)<<endl;

}
