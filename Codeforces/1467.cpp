#include<bits/stdc++.h>
using namespace std;
const int N=3*1e5+5;
int ar[N],n;
bool ishill(int pos)
{
    if(pos<=0 || pos>=n-1) return false;
    if(ar[pos]>ar[pos-1] && ar[pos]>ar[pos+1]) return true;
    return false;
}

bool isvalay(int pos)
{
    if(pos<=0 || pos>=n-1) return false;
    if(ar[pos]<ar[pos-1] && ar[pos]<ar[pos+1]) return true;
    return false;
}

int main()
{
    int t,i;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++) cin>>ar[i];
        bool flag[n]={};
        int ans=0;

        for(i=0;i<n;i++){
            if(ishill(i) || isvalay(i)) flag[i]=1, ans++;
        }
        int mn=ans;
        for(i=1;i<n-1;i++){
            int tmp=ar[i];
            ar[i]=ar[i-1];
            mn=min(mn,ans-flag[i]-flag[i-1]-flag[i+1]
                   +ishill(i)+ishill(i+1)+ishill(i-1)+isvalay(i)+isvalay(i-1)+isvalay(i+1));
            ar[i]=ar[i+1];
            mn=min(mn,ans-flag[i]-flag[i-1]-flag[i+1]
                   +ishill(i)+ishill(i+1)+ishill(i-1)+isvalay(i)+isvalay(i-1)+isvalay(i+1));
            ar[i]=tmp;
        }
        cout<<mn<<endl;
    }
}
