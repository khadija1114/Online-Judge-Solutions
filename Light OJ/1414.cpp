#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,d1,d2,y1,y2,i,cs=0;
    string m1,m2;
    char ch[20];
    string month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    map<string , int> mth;

   for(i=0;i<12;i++) mth[month[i]]=i;

   scanf("%d",&t);
    while(t--){
        getchar();
       int ans=0;
       scanf("%s%d,%d",ch,&d1,&y1);
       m1=ch;
       scanf("%s%d,%d",ch,&d2,&y2);
       m2=ch;

       if(mth[m1]>1) y1++;
       if(mth[m2]<1 || (mth[m2]==1 && d2<29)) y2--;

       ans=y2/4-(y1-1)/4;
       ans-=y2/100-(y1-1)/100;
       ans+=y2/400-(y1-1)/400;
       printf("Case %d: %d\n",++cs,ans);
    }
}

