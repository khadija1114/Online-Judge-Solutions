#include<bits/stdc++.h>
using namespace std;
int hash_cal(string const& s){
   int m=1e9+9;
   int p=31;
   int hash_value=0;
   int p_pow=1;
   for(char i: s){

        hash_value=(hash_value+(i-'a'+1)*p_pow)%m;
        p_pow=(p*p_pow)%m;
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
        if(hash_cal(s)==hash_cal(c)) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }

}
