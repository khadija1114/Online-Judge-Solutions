#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main ()
{
    int i,n,p;
    double sum=0.0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p);
        sum=sum+p;
    }
    cout<<showpoint<<setprecision(12);

    cout<<sum/n;

    return 0;
}
