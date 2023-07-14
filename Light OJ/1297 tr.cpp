#include<bits/stdc++.h>
using namespace std;
int main()
{
    double l,w,x;
    int i=0,t;
    scanf("%d",&t);
    while(t--){
        scanf("%lf %lf",&l,&w);
        x=(l+w-sqrt(w*w+l*l-l*w))/6.0;
        printf("Case %d: %0.10lf\n",++i,x*(w-2*x)*(l-2*x));
       // printf("%lf\n",x);
    }

    return 0;
}
