#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1[26],b1[26],j;
    char name1[105],name2[105];
    int i,t;
    cin>>t;
    getchar();
    for(i=1;i<=t;i++)
    {
        int flag=0;
        gets(name1);
        gets(name2);
        memset(a1,0,sizeof a1);
        memset(b1,0,sizeof b1);
        for(j=0;a1[j];j++)
        {
            if(name1[j]>=65&&name1[j]<=90)
                a1[name1[j]-65]++;
            if(name1[j]>=97&&name1[j]<=122)
                a1[name1[j]-97]++;
        }

         for(j=0;b1[j];j++)
        {
            if(name2[j]>=65&&name2[j]<=90)
                a1[name1[j]-65]++;
            if(name2[j]>=97&&name2[j]<=122)
                a1[name2[j]-97]++;
        }

        for( j=0;j<26;j++)
        {
            if(a1[j]!=b1[j])
            {
                cout<<"Case "<<i<<": No"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Case "<<i<<": Yes"<<endl;

        }
    }





}
