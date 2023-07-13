#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,a,ans=1e9+9;
    map<int,int> cnt,precnt;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>a;
        cnt[a]++;
    }
    for(auto [x, y]: cnt){
        precnt[y]++;
    }
    int left=0,right=n,del=cnt.size();
    for(auto [x, y]: precnt){
    //    cout<< left <<" " << right<<" "<<x<<" "<<y<<endl;
    //    cout<< ans << " "<< left + right - del * x << endl;
        ans = min (ans, left + right - del * x);
        left += x * y;
        right -= x * y;
        del -= y;
    }

    cout<< ans << "\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve ();
    }
}
