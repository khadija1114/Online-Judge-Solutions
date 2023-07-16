#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,n,a,q,t;
   long long mp[1005],k;
    char s[10007],c;
   cin>>t;
    while(t--){
        for(i=0;i<1003;i++) mp[i]=0;
        long long cnt=0;
        cin>>n;
        getchar();
        while(n--){
            cin>>c>>a;
            mp[int(c+128)]=a;

        }
       cin>>n;
        getchar();
        while(n--)
        {
           gets(s);
            for(i=0;s[i];i++)
            {
                cnt+=mp[int(s[i]+128)];
            }
        }
      cout<<fixed<<setprecision(2)<<double(cnt/100)<<'$'<<"\n";
    }
}

