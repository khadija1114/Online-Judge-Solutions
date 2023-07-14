#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,m,n,a,b,t,ar[100];
    int count;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        count=0;
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&ar[j]);
        }
        sort(ar,ar+n);
        for(j=0;j<n;j++ ){
            for(k=j; k<n && ar[k]==ar[j] ;k++);

        m=k-j;
        count+= ((ar[j]+m)/(ar[j]+1))*(ar[j]+1);
        j=k-1;
       // cout<<count<<endl;
        }
        printf("Case %d: %d\n",i,count);
    }

}
