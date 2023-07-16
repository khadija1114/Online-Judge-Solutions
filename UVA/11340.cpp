#include<bits/stdc++.h>
using namespace std;
map<char,int> mp;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i,j,n,a,q,t;
    char s[10000];
    char c;
    scanf("%d",&t);
    while(t--){
            double cnt=0;
        scanf("%d",&n);
        while(n--){
            cin>>c>>a;
            mp[c]=a;
        }
        cin>>q;
        getchar();
        while(q--)
        {
           gets(s);
            for(i=0;s[i];i++)
            {
                cnt+=mp[s[i]];
            }
        }
        cout<<fixed<<setprecision(2)<<cnt/100<<'$'<<"\n";
    }
}
