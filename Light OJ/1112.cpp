#include<bits/stdc++.h>
#define w(x) scanf("%d",&x);while(x--)
using namespace std;

const int N=1e5+2;
int t,j,cs=0,n,a,b,i,bit[N],ar[N],q;

int getsum(int index){
    index++;
    int sum=0;
    while(index){
        sum+=bit[index];
        index-=(index & -index);
    }
    return sum;
}

void update(int index,int value){
    index++;
    while(index<=n){
        bit[index]+=value;
        index+=(index & -index);
    }
}

void builtBITtree(){
    for(i=0;i<=n;i++)
        bit[i]=0;
    for(int i=0;i<n;i++)
        update(i,ar[i]);
}
int main()
{
    w(t){
        scanf("%d%d",&n,&q);
        for(i=0;i<n;i++) scanf("%d",&ar[i]);
        builtBITtree();
        printf("Case %d:\n",++cs);
        while(q--){
            int r;
            scanf("%d",&r);
            if(r==1){
                scanf("%d",&a);
                printf("%d\n",ar[a]);
                update(a,-ar[a]);
                ar[a]=0;
            }
            else if(r==2){
                scanf("%d%d",&a,&b);
                update(a,b);
                ar[a]+=b;
            }
            else{
                scanf("%d%d",&a,&b);
                printf("%d\n",getsum(b)-getsum(a-1));
            }
        }
    }
}

