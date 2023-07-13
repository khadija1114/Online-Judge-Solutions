#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,x,ans=0,i,s,t,k,y,j,ans1,ans2;
    int v[100000];
    char ch;

    cin>>t;
    while(t--)
    {
        cin>>n>>k>>s;
        ans1=1000000009,ans2=1000000009;
        ans=0,x=-1;
        int minn=0,maxx=1000000009;

       // memset(v,0,sizeof(v));
        for(i=0;i<s;i++)
        {
            cin>>v[i];
            if(v[i]==k)
                x=0;


           // ans=min(ans,abs(k-x));

        }
        if(x==-1) cout<<"0"<<endl;
        else{
            sort(v,v+s);

            for(i=0;i<s;i++)
            {
                cout<<v[i]<<" ";
                if(v[i]==k){
                        y=i;
                    //    cout<<"y "<<y<<endl;
                }
            }
            for(i=y+1; i<s;i++)
            {
                j=1;
                if(k+j!=v[i])
                {
                    ans1=j;

                   // cout<<"ans1 "<<j<<endl;
                    break;
                }
                j++;

            }
            cout<<" "<<y<<endl;
            for(i=y-1;i>=0;i--)
            {
                j=0;
                j++;
                cout<<j<<" ";
                if(k-j!=v[i])
                {
                    ans2=j;

                    cout<<"ans2 "<<j<<" "<<v[i]<<i<<endl;
                    break;
                }
            }
            cout<<min(ans1,ans2)<<endl;

        }





}
}/*
1
100 76 8
76 75 36 67 41 74 10 77*/
