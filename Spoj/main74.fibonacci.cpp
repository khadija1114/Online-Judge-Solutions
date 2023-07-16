#include<bits/stdc++.h>
using namespace std;
long long mx=1000000007;
void power(long long F[2][2],long long n);
void multiply(long long F[2][2],long long M[2][2]);


long long fib(long long  n)
{
    if(n==0) return 0;
    long long F[2][2]={{1,1},{1,0}};
    power(F,n-1);
    return F[0][0];
}
void power(long long F[2][2],long long n)
{


    if(n==0||n==1) return ;
     long long M[2][2]={{1,1},{1,0}};

    power(F,n/2);
    multiply(F,F);
    if(n&1)
    {
        multiply(F,M);
    }
}

void multiply(long long F[2][2],long long M[2][2])
{

    long long x=((F[0][0]*M[0][0])%mx+(F[0][1]*M[1][0])%mx)%mx;
    long long y=((F[1][0]*M[0][0])%mx+(F[1][1]*M[1][0])%mx)%mx;
    long long u=((F[0][0]*M[0][1])%mx+(F[0][1]*M[1][1])%mx)%mx;
   long long  v=((F[1][0]*M[0][1])%mx+(F[1][1]*M[1][1])%mx)%mx;


    F[0][0]=x;
    F[0][1]=u;
    F[1][0]=y;
    F[1][1]=v;
}

int main()
{
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0) cout<<"0"<<endl;
        else if(n==1) cout<<"2"<<endl;
        else cout<<fib(n+3)<<endl;
    }
}
