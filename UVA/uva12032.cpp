#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s=1,i,t,n,m,a[100000],b[100000],ans,k;
    cin>>t;
    while(t--)
    {
        int flag=0;
        ans=0;
        cin>>n>>a[0];
        b[0]=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i]-a[i-1];
        }
        k=*max_element(b,b+n);
       ans=k;
        for(i=0;i<n;i++)
        {
            if(b[i]==k)
            {
                //ans++;
                k--;
            }
            else if (b[i]>k)
            {
                ans++;

                 flag=1;
                 break;
            }

        }
        if(flag==0)
        cout<<"Case "<<s++<<": "<<ans<<endl;\
        else
            cout<<"Case "<<s++<<": "<<ans<<endl;
    }
}/*15
69 137 179 275 317 343 382 414 460 516 611 706 739 758 841
Case 440: 96*/

