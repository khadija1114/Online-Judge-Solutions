#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a[200005],n,maxx=0,cnt=0,b[200005];
    cin>>k>>n;

    int i;
    cin>>a[0];
    for(i=1;i<n;i++){
        cin>>a[i];
        b[i]=a[i]-a[i-1];
        if(maxx<b[i]) maxx=b[i];
        cnt+=b[i];
    }
    b[0]=k-a[n-1]+a[0];
    if(b[0]>maxx) maxx=b[0];
    cnt+=b[0];
  cnt-=maxx;
  cout<<cnt<<endl;

}
