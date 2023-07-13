#include<bits/stdc++.h>
using namespace std;
int flag[105];
int arr[105];
int main()
{
    long long int a,b,m,n,i,j,t,mn,pos,k;
    cin>>t;
    while(t--)
    {
        long long int mn=1000000000;
        cin>>n;


        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        memset(flag,0,sizeof(flag));
        for(i=1;i<=n;i++){

            for(j=1;j<=n;j++){


                mn=1234500000;
                for( k=1;k<=n;k++){

                    if(arr[k]<=mn && arr[k]!=k){
                        mn=arr[k];
                        pos=k;

                    }

                }
                if(flag[pos]==0 && pos>1){
                        flag[pos]=1;

                             swap(arr[pos],arr[pos-1]);
                             count++;
                        }

                         pos=1;


            }
            if(count==n-1) break;
        }

        for(i=1;i<=n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }

}
