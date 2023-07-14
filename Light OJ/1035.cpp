#include<bits/stdc++.h>
using namespace std;
vector<int> a[101];
void factor()
{
//    memset(a,0,a[101].size);
    int temp,i,n,j,sq;
    for(j=2;j<=100;j++)
    {
        temp=j;
        while(temp%2==0)
        {
            temp/=2;
            a[j].push_back(2);
        }
        sq=sqrt(temp+1);
        for(i=3;i<=sq;i+=2)
        {
            while(temp%i==0)
            {
                temp/=i;
                a[j].push_back(i);
            }
            if(temp<sq) break;
        }
        if(temp!=1)  a[j].push_back(temp);
    }
}
int main()
{
    factor();
    int t,i,n,k,flag,j;
    cin>>t;
    map<int ,int > mp;
    for(j=1;j<=t;j++)
    {
        flag=0;
        cin>>n;
        cout<<"Case "<<j<<": ";
        for(i=0;i<=n;i++)
        {
            for(k=0;k<a[i].size();k++)
            {
                mp[a[i][k]]++;
            }
        }
        for(i=2;i<100;i++)
        {
            if(mp[i])
            {
                if(flag==0) {
                        cout<<n<<" = "<<i<<" ("<<mp[i]<<")";//Case 2: 3 = 2 (1) * 3 (1)
                flag=1;
                }
                else  cout<<" * "<<i<<" ("<<mp[i]<<")";

            }

        }cout<<endl;
        mp.clear();


    }
}
