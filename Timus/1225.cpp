#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a=0,b=2,n,i;
    cin>>n;
    n--;
    while(n--){
        i=a;
        a=b;
        b=i+a;
    }
    cout<<b<<endl;
}

