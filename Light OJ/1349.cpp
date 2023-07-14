#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
#include<cstring>
#define ma 50005
int  row[ma],col[ma];

int main()
{
    long long ans,num,mid,ppl;
    int m,n,q,w,v,u,t,i=0,j,x,y;
    scanf("%d",&t);
    while(t--){
            ppl=0;
        scanf("%d%d%d",&m,&n,&q);
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        while(q--){
            scanf("%d%d%d",&u,&v,&w);
            row[u]+=w;
            col[v]+=w;
            ppl+=w;
            //cout<<ppl<<endl;
        }
        num=0;
        mid=(ppl+1)/2;
        for(j=1;j<=m;j++){
            num+=row[j];
            //cout<<num<<" ";
            if(num>=mid){
                x=j;
                break;
            }
        }
        num=0;
        for(j=1;j<=n;j++){
            num+=col[j];
            if(num>=mid){
                y=j;
                break;
            }
        }

        printf("Case %d: %d %d\n",++i,x,y);
    }
}
