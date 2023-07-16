#include<bits/stdc++.h>
using namespace std;
long long compute_hash(string const& s) {
    const int p = 31;
    const int m = 31;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1)) % m;
//        p_pow = (p_pow * p) % m;
        cout<<hash_value<<" ";
    }
    return hash_value;
}
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);cout.tie(0);

    int n,i,t;
    string c,s;
    cin>>t;
    while(t--){
        cin>>s>>c;
        //cout<<hash_cal(s)<<" "<<hash_cal(c)<<endl;
        if(compute_hash(s)==compute_hash(c)) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }

}

