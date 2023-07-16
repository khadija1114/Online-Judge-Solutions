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
map<string,vector<string>> map_;
string solve(string s){
    string ret,left,right;
    vector<string> app;
    app=map_[s];
    if(app[0][0]>='0' && app[0][0]<='9')
        left=app[0];
    else
        left=solve(app[0]);
    if(app[2][0]>='0' && app[2][0]<='9')
        right=app[2];
    else
        right=solve(app[2]);
    if(app[1][0]=='+'){
        ret += left + "+";
        if(app[2][0]>='0' && app[2][0]<='9')
            ret += right;
        else
            ret += '(' + right + ')';
    }
    else{
        int l=0;
        bool bl1=0,bl2=0;
        for(i=0;i<left.size() && bl1==0 ;i++){
            if(left[i]=='(') l++;
            if(left[i]==')') l--;
            if(l==0 && left[i]=='+')
                bl1=1;
        }
        if(bl1)
            ret += '(' + left + ")*";
        else
            ret += left + "*";
        l=0;
         for(i=0;i<right.size() && bl2==0 ;i++){
            if(right[i]=='(') l++;
            if(right[i]==')') l--;
            if(l == 0 && ( right[i] == '+' || right[i]=='*'))
                bl2=1;
        }
        if(bl2)
            ret += '(' + right + ')';
        else
            ret += right;
    }
    return ret;

}
int main()
{
    w(t){
        cin>>n;
        map_.clear();
        char A[20],B[20],C[20],X[20];
        for(i=0;i<n;i++){
            scanf("%s = %s %s %s",X,A,B,C);
            vector<string> st;
            st.pb(A);st.pb(B);st.pb(C);
            map_[X]=st;
        }
        printf("Expression #%d: ",++cs);
        cout<<solve(X)<<"\n";
    }
}


