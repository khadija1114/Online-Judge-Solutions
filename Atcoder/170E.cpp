#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long  mod=1e9+9;
const int N=2*1e5+2;
int t,j,cs=0,n,a,b,i,ele,q,past;
string s;

int main()
{
    cin>>n>>q;
    int ar[n],ad[n];
    multiset<int>ans;
    set<int>address;
    map<int,multiset<int>> map_;
    for(i=0;i<n;i++){
        cin>>ar[i]>>ad[i];
        address.insert(ad[i]);
        map_[ad[i]].insert(ar[i]);
    }
    for(auto it=address.begin();it!=address.end();it++){
        a=*(map_[*it].rbegin());
        ans.insert(a);
    }

    while(q--){
        cin>>a>>b;
        ele=ar[a-1];
        past=ad[a-1];
        ad[a-1]=b;
         if(ele==*(map_[past].rbegin())){
                 map_[past].erase(map_[past].find(ele));
                 ans.erase(ans.find(ele));
                 if(map_[past].size()!=0){
                 int neww=*(map_[past].rbegin());
                 ans.insert(neww);
                 }
        }
        else{
            map_[past].erase(map_[past].find(ele));
        }
        int now;
         if(map_[b].size()!=0){
            now=*(map_[b].rbegin());
            map_[b].insert(ele);
            if(ele>now){
                ans.erase(ans.find(now));
                ans.insert(ele);
            }
        }
        else{
            ans.insert(ele);
            map_[b].insert(ele);
        }

       cout<<*ans.begin()<<endl;
    }
}

//*/
