
#include <bits/stdc++.h>
#include <ext/rope>
using namespace std;
using namespace __gnu_cxx;
int main()
{
    ios_base::sync_with_stdio(false);
    rope<char> v;
    int n, m ,i,l,r;
    string s;
    cin >> s >> m;
    for(i=0;i<s.size();i++){
        v.push_back(char(s[i]));
    }
    for( i = 0; i < m; ++i)
    {
        cin >> n;
        if(n==3){
            cin>>l;
            cout<<v[l]<<endl;
        }
        else{
            cin>>l>>r;
            crope cur = v.substr(l, r - l + 1);
            v.erase(l, r - l + 1);
            if(n==1)
                v.insert(v.mutable_begin(), cur);
            else if(n==2)
                v.insert(v.mutable_end(), cur);
        }

    }
}
