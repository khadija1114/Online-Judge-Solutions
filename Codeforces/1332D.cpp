#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    if(!k) cout<<1<<" "<<1<<"\n"<<1<<"\n";
    else {
        int one_17=(1<<18)-1;
        int zero_16=(1<<17);
        int zero_k= zero_16+k;
        cout<<3<<" "<<3<<"\n";
        cout<<one_17<<" "<<one_17<<" "<<zero_16<<"\n";
        cout<<one_17<<" "<<k<<" "<<zero_k<<"\n";
        cout<<zero_16<<" "<<zero_k<<" "<<k<<"\n";
    }
}
