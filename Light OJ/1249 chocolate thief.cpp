#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,i,j,t,n,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        vector <int> arr;
        char names[100][100];
        char temp[100];
        cin>>n;
        sum=0;
        for(j=0;j<n;j++)
        {
            cin>>temp;
            strcpy(names[j],temp);
            cin>>x>>y>>z;
            sum+=x*y*z;
            arr.push_back(x*y*z);

        }
        int pi=sum/n;
        int ok=0;
        char who[100];
        char from[100];
        for(j=0;j<n;j++)
        {
            if(arr[j]>pi)
            {
                strcpy(who,names[j]);
                ok=1;
            }
            else if(arr[j]<pi)
            {
                strcpy(from,names[j]);
                ok=1;
            }
        }
        if(ok)
            printf("Case %d: %s took chocolate from %s\n",i,who,from);
        else
        {
            printf("Case %d: no thief\n",i);
        }
    }
}
