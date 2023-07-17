#include<bits/stdc++.h>
#define endl "\n"
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

const int N=500001;
int i,j,n,q,l,r,ans[N],freq[N],cnt,ar[N],blc=1000;

struct node {
    int L,R,pos;
}Q[N];

bool cmp(node x, node y){
    if(x.L/blc!=y.L/blc)
        return x.L/blc<y.L/blc;
    return x.R<y.R;
}

int main()
{
    ios
    scanf("%d%d",&n,&q);
   // blc=sqrt(n);
    for(i=0;i<n;i++)  scanf("%d",&ar[i]);
    for(i=0;i<q;i++){
       scanf("%d%d",&Q[i].L,&Q[i].R);
        Q[i].L--; Q[i].R--;
        Q[i].pos=i;
    }
    sort(Q,Q+q,cmp);
    int start=0,end=0;
    for(i=0;i<q;i++){
        l=Q[i].L;
        r=Q[i].R;
        while(start<l){
          //  remove(start);
            freq[ar[start]]--;
            if(freq[ar[start]]==0) cnt--;
            start++;
        }
        while(start>l){
            //add(start-1);
            freq[ar[start-1]]++;
            if(freq[ar[start-1]]==1) cnt++;
            start--;
        }
        while(end<=r){
            //add(end);
            freq[ar[end]]++;
            if(freq[ar[end]]==1) cnt++;
            end++;
        }
        while(end>r+1){
            //remove(end-1);
            freq[ar[end-1]]--;
            if(freq[ar[end-1]]==0) cnt--;
            end--;
        }
        ans[Q[i].pos]=cnt;
    }
    for(i=0;i<q;i++){
         printf("%d\n",ans[i]);
    }
}


