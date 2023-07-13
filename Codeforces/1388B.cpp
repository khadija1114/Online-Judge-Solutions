#include<bits/stdc++.h>
#define bg begin()
#define en end()
#define w(x) scanf("%d",&x);while(x--)
#define endl "\n"
using namespace std;
int t,j,cs=0,n,a,b,i;
string s;

int main()
{
    w(t){
        cin>>n;
        string s;
        a=ceil(n/4.0);
        while(a && n){
             s+='8';
             a--;n--;
        }
        while(n){
            s+='9';
            n--;
        }
        reverse(s.bg,s.en);
        cout<<s<<endl;
    }
}

