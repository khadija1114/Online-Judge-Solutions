#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    w(t){
        cin>>n;
        if(n==4 || n<3){
            cout<<-1<<endl;
        }
        else{
            int c=n/3,a=0,b=0;
            n%=3;
            if(n==1){
                c-=2;
                a=1;
            }
            else if(n==2){
                c-=1;
                b=1;
            }
            if(c<0){
                cout<<-1<<endl;
            }
            else
            cout<<c<<" "<<b<<" "<<a<<endl;
        }
    }
}



