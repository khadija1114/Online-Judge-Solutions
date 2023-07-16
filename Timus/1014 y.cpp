//#include<stdio.h>
//#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,q,m=0;
   vector <int> v;
   // string s;
    scanf("%d",&n);
    if(n==1) printf("1\n");
    else if(n==0) cout<<"10"<<endl;
   /* else if(n<10)
    {
        if(n%2==0&&n!=2)    cout<<"2"<<n/2<<endl;
        else if(n%3==0&&n!=3)   cout<<"3"<<n/3<<endl;
        else    cout<<"1"<<n<<endl;
    }*/
    else {


    for(i=9;i>=2;i--)
    {
       while(n%i==0)
       {
           v.push_back(i);
           n/=i;
       }
    }
    if(n==1)
    {
        for(int k=v.size()-1;k>=0;k--)
        {
            cout<<v[k];
        }
        cout<<endl;
    }
    else     cout<<"-1"<<endl;

    }



   // return 0;
}
