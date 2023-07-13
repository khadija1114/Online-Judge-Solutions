#include<bits/stdc++.h>
using namespace std;
 int a[200005],b[200005],cou=0,x=1,n,m,i,j,p=0,k,flag=0,t=7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set <int> s;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
       // b[a[i]]=1;
    }
    sort(a,a+n);
    while(1){
        if(flag==0)
        {
            for(i=0;i<n;i++){
                    if(a[i]-x!=a[i-1]||i==0){
                            k=s.size();
                          s.insert( a[i]-x);
                         // cout<< a[i]-x<<" ";
                        if(k!=s.size()) cou+=x;
                          if(s.size()==m) break;
                        //cout<<<<" ";


                    }

            }

            flag=1;
        }
        else{
            for(i=0;i<n;i++){
                    if(a[i]+x!=a[i+1]||i==n-1){
                            k=s.size();
                         s.insert(a[i]+x);
                    if(k!=s.size()) cou+=x;
                          //  cout<<a[i]+x<<" ";
                          //cout<<b[k-1]<<" ";
                          if(s.size()==m) break;


                    }

            }

            flag=0;
        }
        if(!flag)
        x++;
        if(s.size()==m) break;
    }
    cout<<cou<<"\n";
   for(auto j=s.begin();j!=s.end();++j)
    {
        cout<<*j<<" ";

    }


}
