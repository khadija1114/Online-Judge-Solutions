#include<bits/stdc++.h>
using namespace std;
int phi(int n)
{
    int i,result=n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0){
            while(n%i==0)
                n=n/i;
            result -=result/i;
            // cout<<n<<endl<<result<<endl;
        }


    }
    if(n>1) result -= result/n;
    return result;
}
int main()
{

    int i,n;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        cout<<phi(n)<<endl;
    }
}
