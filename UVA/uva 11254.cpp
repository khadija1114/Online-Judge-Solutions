#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y,a,b,xa,xb,i;
    while(scanf("%lld",&n)!=EOF &&n>0){
        xa=xb=n,n=2*n;
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                a=n/i,b=i;
                if((a+b-1)&1) continue;
                if((a-b+1)&1) continue;
                x=(a+b-1)/2;
                y=(a-b+1)/2;
                if(x-y+1>xa-xb+1){
                    xa=x,xb=y;
                }
            }
        }
        printf("%lld = %lld + ... + %lld\n",n/2,xb,xa);
    }
}
