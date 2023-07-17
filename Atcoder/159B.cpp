#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0,i,j;
    string s;
    cin>>s;
    n=s.size();
    for(i=0,j=n-1;i<n;i++,j--){
        if(s[i]!=s[j]){
            cout<<"No"<<endl;
//            cout<<1<<" "<<s[i]<<s[n-1-i];
            return 0;
        }
        if(i==j) break;
    }
    for(i=0,j=((n-1)/2)-1;i<n;i++,j--){
         if(s[i]!=s[j]){
            cout<<"No"<<endl;
         //    cout<<2<<" "<<s[i]<<s[j];
            return 0;
        }
        if(i==j) break;
    }
    for(i=((n+3)/2)-1,j=n-1;i<n;i++,j--){
         if(s[i]!=s[j]){
            cout<<"No"<<endl;
//             cout<<3<<" "<<s[i]<<s[j];
            return 0;
        }
        if(i==j) break;
    }
    cout<<"Yes"<<endl;
}

