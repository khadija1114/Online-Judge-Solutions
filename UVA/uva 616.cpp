#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,sq,ans;
    while(scanf("%d",&n)==1&&n>0){
            bool flag=true;
        printf("%d coconuts, ",n);
        sq=sqrt(n)+1;
        for(i=sq;i>1;i--){
            ans=n;
            for(j=1;j<=i;j++){
                if(ans%i!=1) break;
                ans=ans-ans/i-1;
            }
            if(j-1==i&&ans%i==0){
                flag = false;
                printf("%d people and 1 monkey\n",i);
                break;
            }
        }
        if(flag) puts("no solution");
    }
}
