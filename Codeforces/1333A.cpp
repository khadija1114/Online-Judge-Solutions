#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n;
    cin>>t;
    while(t--){
        int m,j;
        cin>>n>>m;
        if(n%2 + m%2 >0){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
            {
                if((i+j)%2==0)
                {
                    cout<<'B';
                }
                else if( (i+j)%2==1&&i+j!=n+m-2)
                {
                    cout<<'W';
                }
                else cout<<'B';

            }
            cout<<"\n";
        }
        }
        else{
            for(i=0;i<n;i++){
            for(j=0;j<m;j++)
            {
                if((i+j)%2==1)
                {
                    cout<<'B';
                }
                else if( (i+j)%2==0&&i+j!=n+m-2)
                {
                    cout<<'W';
                }
                else cout<<'B';

            }
            cout<<"\n";
        }

    }
}
}
