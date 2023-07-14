#include<stdio.h>
int ar[100005];
int main()
{
    int n,sum=0,q,t,i=0,j,k,a,x,v;
    bool bl;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&q);
        sum=0;
        for(j=0;j<n;j++){
            scanf("%d",&ar[j]);
        }
        printf("Case %d:\n",++i);
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++)
                sum+=ar[j]-ar[k];
        }
        while(q--){
                scanf("%d",&a);
                if(a==1){
                    printf("%d\n",sum);
                }
                else{
                        scanf("%d%d",&x,&v);
                    sum+=(x-n+x+1)*ar[x]-(x-n+1+x)*v;
                    ar[x]=v;
                }
        }
    }

}
