#include<bits/stdc++.h>
using namespace std;
char ch[105][105];
int i,j,n,m,cnt=0;
void flood(int i,int j){
    if(i<-1 || i>n-1 || j<-1 || j>m-1 || ch[i][j]!='@')
      return ;



    ch[i][j]='*';


    flood(i-1,j);
    flood(i-1,j-1);
    flood(i-1,j+1);
     flood(i,j+1);
    flood(i,j-1);
    flood(i+1,j-1);
    flood(i+1,j+1);
    flood(i+1,j);
}
int main()
{

    while (scanf("%d%d",&n,&m)==2){
        if(n==0) break;
            cnt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ch[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ch[i][j]=='@')
            {
                cnt++;
                flood(i,j);
            }
        }
    }
    cout<<cnt<<endl;
    }

}
