#include<bits/stdc++.h>
using namespace std;
/*long long  fun(int a)
{
    return (a*(a-1))/2;
}*/
int main()
{
    long long  a,t,n,m,maxi,mini;

    //cin>>t;
    //while(t--){
    cin>>n>>m;
    a=n-m+1;
        maxi=(a*(a-1))/2;
    //cout<<n*m<<endl;
   if(m==1)
   {
        mini=(n*(n-1))/2;
       // maxi=mini;

   }
    else if(n-m==1)
    {
        mini=1;
      //  maxi=mini;
    }
    else
    {

        if(n%m==0)
        {
            a=n/m;
            mini=m*(a*(a-1))/2;
        }
        else
        {
            if(m!=2)
            {

               a=n/m;
               mini=(m-(n%m))*(a*(a-1))/2+n%m*((a*(a+1))/2);
            }
            else
            {
                a=n/m;
                mini=((a*(a-1))/2)+((a*(a+1))/2);
            }

        }
    }
    cout<<mini<<" "<<maxi<<endl;

}
