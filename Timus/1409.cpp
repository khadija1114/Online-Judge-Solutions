#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> q;
    int x,y;
    cin>>x>>y;
    q.push_back(x);
    q.push_back(y);
   //int sum=x+y-1;
    cout<<q.back()-1<<" "<<q.front()-1<<endl;

}

