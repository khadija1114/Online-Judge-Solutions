
#include<bits/stdc++.h>
using namespace std;
int a1,a2,a3,a4,x1,x2,x3,x4,b1,b2,b3,b4;
int main()
{
    ios_base::sync_with_stdio(0);
  cin.tie(0);
   cout.tie(0);

    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
            int flag=0,j=8;
        scanf("%d.%d.%d.%d",&a1,&a2,&a3,&a4);
        scanf("%d.%d.%d.%d",&b1,&b2,&b3,&b4);
        while(j--){
             if(a1%2==b1%10&&a2%2==b2%10&&a3%2==b3%10&&a4%2==b4%10){
                a1=a1/2;
                b1=b1/10;
                a2=a2/2;
                b2/=10;
                a3/=2;
                b3/=10;
               a4/=2;
                 b4/=10;
             }
             else{
                flag=1;
                break;
             }

        }
    if(flag) printf("Case %d: No",i);
    else printf("Case %d: Yes",i);

    cout<<"\n";

    }
}
