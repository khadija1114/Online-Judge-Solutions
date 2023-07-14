#include <bits/stdc++.h>
using namespace std;

int binarySearch1(int arr[], int l, int r, int x)
{
    while (l < r) {
        int m = (l + r) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;

         //   cout<<l<<" "<<r<<endl;
    }
    return l;
}
int binarySearch2(int arr[], int l, int r, int x)
{
    while (l < r) {
        int m = (l + r-1) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;

         //   cout<<l<<" "<<r<<endl;
    }
    return r;
}
int main()
{
     ios_base::sync_with_stdio(0);
  cin.tie(0);
   cout.tie(0);
    int arr[100005];
    int i,j,t,q,n,m,s;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>s>>q;
        for(j=0;j<s;j++) cin>>arr[j];
        cout<<"Case "<<i<<": "<<endl;
        for(j=0;j<q;j++){
            cin>>n>>m;
           cout<< binarySearch2(arr,0,s-1,m)-binarySearch1(arr,0,s-1,n)<<"\n";

        }
    }

}
