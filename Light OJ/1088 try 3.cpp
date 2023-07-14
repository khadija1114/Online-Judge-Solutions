#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,a,b,i,j,t,q,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&n,&q);
        int ar[100006];
        for(j=0;j<n;j++){
           scanf("%d",&ar[j]);
        }
        printf("Case %d:\n",i);
        while(q--){
        scanf("%d%d",&x,&y);
        a=lower_bound(ar,ar+n,x)-ar;
        b=upper_bound(ar,ar+n,y)-ar;
        printf("%d\n",b-a);
        }


    }

}
