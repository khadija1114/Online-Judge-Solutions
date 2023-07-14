#include<bits/stdc++.h>
#define mod 1e9+9
#define make_pair mp
#define ff first
#define ss second
#define pb push_back
#define w(x) cin>>x;while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
const int N=100000;
int t,i,j,cs=0,prime[N],k=0;
 long long int n;
bitset<N+1> mark;
void seive(){
    prime[k++]=2;
    int n=sqrt(N);
    for(i=3;i<n;i+=2){
        if(!mark[i]){
            for(j=i*i;j<N;j+=(2*i))
                mark[j]=1;
        }
    }
    for(i=3;i<N;i+=2){
        if(!mark[i])
            prime[k++]=i;
    }
}

int main()
{
    seive();
    w(t){
        scanf("%lld",&n);
        set<int> st;
        bool sign;
        if(n<0){
            sign =0;
        }
        else sign =1;
        n=abs(n);
       // cout<<n<<endl;
        int x,y=sqrt(n),ans=0;
        for(i=0;prime[i]<=y && i<k;i++){
            if(n%prime[i]==0){
                x=0;
                while(n%prime[i]==0){
                    x++;
                    n/=prime[i];
                }
                if(sign==1)
                    st.insert(x);
                else if(sign==0 && x&1 )
                    st.insert(x);
                else if(sign==0 && x%2==0){
                    while(x%2==0) x/=2;
                    st.insert(x);
                }
              //  cout<<prime[i]<<" "<<x<<" "<<n<<endl;
            }
        }
       // for(auto it=st.begin();it!=st.end();it++) cout<<*it<<" ";
        if(n>1) st.insert(1);
        printf("Case %d: %d\n",++cs,*st.begin());

    }

}


