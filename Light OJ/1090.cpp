#include<bits/stdc++.h>
using namespace std;
int fact(int n,int m)
{
    int total=0;
    while(n)
    {
        total+=n/m;
        n/=m;
    }
    return total;
}
int power(int n,int m)
{
        int total=0;
    while(n%m==0&&n)
    {
        n/=m;
        total++;
    }
    return total;
}
int main()
{
    int t,i,n,m,a,b,fact2,fact5;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m>>a>>b;
        fact2=fact(n,2)-fact(m,2)-fact(n-m,2)+(power(a,2)*b);
        fact5=fact(n,5)-fact(m,5)-fact(n-m,5)+(power(a,5)*b);
        cout<<"Case "<<i<<": "<<min(fact2,fact5)<<endl;
    }

}
