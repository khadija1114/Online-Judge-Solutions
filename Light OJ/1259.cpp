#include<bits/stdc++.h>
using namespace std;
const int N=1e7+2;
int prime[N/10];
bool mark[N];
void sieve()
{
    int i,j,k=0;
    //prime[k++]=2;
    int m=sqrt(N);
    for(i=3;i<=m;i+=2){
        if(!mark[i]){
            prime[k++]=i;
            for(j=i*i;j<N;j+=2*i) mark[j]=1;
        }
    }
    for( ;i<N;i+=2){
        if(!mark[i]) prime[k++]=i;
    }

}

int main()
{
    sieve();
    int n,x,y,t,i,cs=0;
    scanf("%d",&t);
    while(t--){
            int k=0,cnt=0;
        scanf("%d",&n);
        if(n==4) cnt=1;
        for(i=0; ;i++){
            x=prime[k];
            y=n-x;
            if(y<x) break;

            if(!mark[y]) cnt++;
            k++;
        }
        printf("Case %d: %d\n",++cs,cnt);
    }
}
