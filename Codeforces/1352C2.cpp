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
int t,i,j,cs=0,a,b;
string s;

int main()
{
    long long n,k;
    w(t){
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++)
            cin>>ar[i];
        int ma=0,mb=0,cnt=0;
        int sa=0,sb=0;
        for(i=0,j=n-1;i<=j; ){
            while(ma<=mb){
                ma+=ar[i];
                i++;
                if(i>=j) break;
            }
            sa+=ma; mb=0;
            cnt++;
            while(mb<=ma){
                mb+=ar[j];
                j--;
                if(j<=i)
                    break;
            }
            sb+=mb;
            ma=0;
            cnt++;
            //cout<<ma<<" "<<mb<<endl;
        }
        cout<<cnt<<endl<<sa<<" "<<sb<<endl;

    }

}



