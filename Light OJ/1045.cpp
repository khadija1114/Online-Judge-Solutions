#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,j,t;
    double count;
    double wow[1000005];



	//cin >> t;

	for(int i = 1; i <= 1000002; i++) {
		wow[i] = wow[i-1] + log(i);
	}
    cin>>t;
    for(j=1;j<=t;i++)
    {
        cin>>n;
        count=0;
        for(i=1;i<=n;i++)
        {
            count=count+log(i);
            cout<<count<<" "<<wow[i]<<endl;
        }
    }

}
