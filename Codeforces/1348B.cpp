#include<bits/stdc++.h>
#define w(x) scanf("%d",&x);while(x--)

using namespace std;
int t,i,j,cs=0,n,a,b,k;
string s;

int main()
{
    w(t){
        cin>>n>>k;
        int ar[n+1],cnt,a=1;
        set<int> st;
        for(i=0;i<n;i++){
            cin>>ar[i];
            st.insert(ar[i]);
        }
        cnt=st.size();

        if(cnt>k) cout<<-1<<endl;

        else{
        while(st.size()!=k)
            st.insert(a++);
         auto it=st.end();it--;
         b=*it;
        // b=max(b,k);
           cout<<n*k<<endl;
            for(i=0;i<n;i++)
            {
                for(auto it: st)
                cout<<it<<" ";
            }
            cout<<endl;

        }
      //  cout<<endl;

    }
}


