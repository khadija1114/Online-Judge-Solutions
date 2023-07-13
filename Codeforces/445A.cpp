#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
   char arr[105][105];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
//            cin>>arr[i][j];
              if(arr[i][j]=='.')
              {
                  if((i+j)%2==0) cout<<'B';
                  else cout<<'W';
              }
              else cout<<arr[i][j];
        }
        cout<<'\n';
    }

}
