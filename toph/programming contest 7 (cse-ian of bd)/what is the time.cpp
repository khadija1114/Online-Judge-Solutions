//#include<stdio.h>
//#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n;
    int t;
    //char a[100];
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d:%d:%d",&a,&b,&c);
        if(a!=12)   a=12-a;
        if(b!=0)
        b=60-b;
        if(c!=0)
        c=60-c;
         if(a==0) cout<<"00"<<":";
        else if(a<10) cout<<"0"<<a<<":";

        else cout<<a<<":";

        if(b==0) cout<<"00"<<":";
        else if(b<10) cout<<"0"<<b<<":";
        else cout<<b<<":";
        if(c==0) cout<<"00"<<endl;

        else if(c<10) cout<<"0"<<c<<endl;
        else cout<<c<<endl;

       // printf("%2d:%2d:%2d\n",a,b,c);
    }
}
