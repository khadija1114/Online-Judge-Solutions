#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=100000;
int t,i,j,cs=0,n,a,b;
string s;

vi zalgo(string s){
   int n=s.size();
   int left=0,right=0,k=0;
   vi z(n);
   for(i=1;i<n;i++){
    if(i>right){
        right=i,left=i;
        while(right<n && s[right]==s[right-left])
            right++;
        z[i]=right-left;
    }
    else{
        k=i-left;
        if(z[k]+i-1<right)
            z[i]=z[k];
        else{
            left=i;
            while(right<n && s[right]==s[right-left]){
                right++;
            }
            z[i]=right-left;
            right--;
        }
    }
   // cout<<z[i]<<" ";
   }
   z[0]=n;
 //  for(auto it:z) cout<<it<<" ";
   return z;
}
int main()
{
    scanf("%d",&t);
    getchar();
    while(t--){
        cin>>s;
        reverse(s.begin(),s.end());
        vector<int> v=zalgo(s);
        reverse(v.begin(),v.end());

        w(n){
            scanf("%d",&a);
           printf("%d\n",v[a-1]);
        }
    }
}


