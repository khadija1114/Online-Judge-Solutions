#include<bits/stdc++.h>
#define mod 1e9+9
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=100000;
int t,i,j,cs=0,n,a,b;
int ch[]={0,3,6,1,4,7,2,5,8};
string s;
int main()
{
    w(t){
        string ar[9];
        bool bl[10]={};
        for(i=0;i<9;i++){
                cin>>ar[i];
                //ar[i]=s;
        }
         for(i=0;i<9;i++){
            a=ar[i][ch[i]]-'0';
            if(a==9) a=1;
            else a++;
            ar[i][ch[i]]='0'+a;
        }
       // cout<<endl;
        for(i=0;i<9;i++){
                cout<<ar[i]<<"\n";
        }

    }

}

