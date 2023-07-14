#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        set <int> st;
        long long count=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
             scanf("%d",&m);
             st.insert(m);
        }
        for(auto k=st.begin();k!=st.end();k++) count+=*k;

        count+=st.size();
        printf("Case %d: %lld\n",i,count);

    }
}
