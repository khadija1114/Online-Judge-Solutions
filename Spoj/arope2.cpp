#include <bits/stdc++.h>
#include <ext/rope>
using namespace std;
using namespace __gnu_cxx;
int main()
{
    ios_base::sync_with_stdio(false);

    int n, m ,i,l,r,t=0,k=0;
    string s;
    cin >> s >> m;
    rope<string> v;
    v.push_back(s);
    for( i = 0; i < m; ++i)
    {
        cin >> n;
        rope<char> vop=v[t];
        if(n==3){
            cin>>l;
            cout<<v[t][l]<<endl;
        }
        else{
            cin>>l>>r;
            rope<string> cur = vop.substr(l, r - l + 1);
            vop.erase(l, r - l + 1);
            if(n==1){
                vop.insert(v[t+1].mutable_begin(), cur);
            }
            else if(n==2)
                vop.insert(v[t+1].mutable_end(), cur);
            else {
                cout<<v[l][r]<<endl;
            }
        }
        v[t++]=vop;
    }
}

