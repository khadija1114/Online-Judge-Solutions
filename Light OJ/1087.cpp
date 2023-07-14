#include<bits/stdc++.h>
#define w(x) scanf("%d",&x);while(x--)
using namespace std;

const int N=1e6;
int t,j,cs=0,n,a,b,i,tree[N+2],ar[N],q;

int getsum(int index){
    int sum=0;
    while(index){
        sum+=tree[index];
        index-=(index & -index);
    }
    return sum;
}

void update(int index,int val){
    while(index<=N){
        tree[index]+=val;
        index+=(index & -index);
    }
}

int main()
{
    w(t){
        for(i=0;i<=N;i++)
            tree[i]=0;
        scanf("%d%d",&n,&q);
        for(i=1;i<=n;i++){
            scanf("%d",&ar[i]);
            update(i,1);
        }
        printf("Case %d:\n",++cs);
        while(q--){
            char ch;
            scanf(" %c%d",&ch,&a);
            if(ch=='a'){
                n++;
                ar[n]=a;
                update(n,1);
            }
            else{
                int st=a,en=N,mid,ans=-1;
                while(st<=en){
                    mid=(st+en)/2;
                    if(getsum(mid)<a)
                        st=mid+1;
                    else{
                        en=mid-1;
                        ans=mid;
                    }
                }
                if(ans==-1)
                    printf("none\n");
                else{
                    printf("%d\n",ar[ans]);
                    update(ans,-1);
                }
            }
        }
    }
}
