#include<bits/stdc++.h>
using  namespace std;
int main(){
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        int st,en;
        st=n/10; en=n%10;
        if(n==1) cout<<9;
        else if(n==2) cout<<98;
        else if(n==3) cout<<989;
        else{
            cout<<989;
            for(j=0,i=3;i<n;i++,j++) cout<<j%10;
        }

        cout<<endl;
    }

}
