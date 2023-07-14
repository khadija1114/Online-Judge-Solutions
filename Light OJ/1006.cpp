#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

long long a,b,c,d,e,f;
long long aa[100005];

long long fn( long long n)
{
    if(n==0) return a;
    else if ( n==1) return b ;
    else if ( n==2) return  c;
    else if ( n==3 ) return  d;
    else if ( n==4) return  e;
    else if ( n==5 ) return  f;
    else if ( aa[n]!= -1) return aa[n] ;

    else
    {
        aa[n]=(   fn(n-1)+fn(n-2)+fn(n-3)+fn(n-4)+fn(n-5)+fn(n-6))%10000007;
        return aa[n];
    }


}


int main ()
{
    long long n,i,t;
    scanf("%lld",&t);

    for(i=0;i<t;i++)
    {
        memset(aa,-1,sizeof(aa));

        scanf(" %lld %lld %lld %lld %lld %lld %lld ",&a,&b,&c,&d,&e,&f,&n);

        printf("Case %lld: %lld\n",i+1,fn(n)%10000007);
    }
    return 0;
}
