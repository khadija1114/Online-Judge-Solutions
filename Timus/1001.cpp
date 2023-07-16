#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<unsigned long long> v;
    unsigned long long n;
    while(cin>>n){
        v.push_back(n);
    }
    reverse(v.begin(),v.end());
    for(auto it:v){
        cout<<fixed<<setprecision(5)<< sqrt(it)<<endl;
    }
}
